#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cv::Mat pic = cv::imread("/Users/emmaholthouser/Desktop/segTest.jpeg");
    if (pic.data == NULL)
        {
            std::cout << "No image found! Check path." << std::endl;
            //return 1;//ERROR
        }
        else
        {
    cv::namedWindow("My image");
    cv::imshow("My Image", pic);

    cv::Mat mask;
    cv::inRange(pic, cv::Scalar(255, 255, 255), cv::Scalar(255, 255, 255), mask);
    pic.setTo(cv::Scalar(0, 0, 0), mask);

    cv::imshow("Black background", pic);

    //kernel to make the image sharper
    cv::Mat kernel = (cv::Mat_<float>(3, 3) <<
                      1, 1, 1,
                      1, -8, 1,
                      1, 1,  1);

    //laplacian filtering
    cv::Mat LapImage;
    cv::filter2D(pic, LapImage, CV_32F, kernel);
    cv::Mat sharpImg;
    pic.convertTo(sharpImg, CV_32F);
    cv::Mat resultImg = sharpImg - LapImage;
    resultImg.convertTo(resultImg, CV_8UC3);
    LapImage.convertTo(LapImage, CV_8UC3);
    //laplacian image window
    cv::imshow("Sharpened Image", resultImg);

    cv::Mat binaryImage;
    cv::cvtColor(resultImg, binaryImage, cv::COLOR_BGR2GRAY);
    cv::threshold(binaryImage, binaryImage, 40, 255, cv::THRESH_BINARY | cv::THRESH_OTSU);
    cv::imshow("Binary Image", binaryImage);

    //dinstance transform on the image
    cv::Mat distTrans;
    cv::distanceTransform(binaryImage, distTrans, cv::DIST_L2, 3);

    //normalize image
    cv::normalize(distTrans, distTrans, 0, 1.0, cv::NORM_MINMAX);
    cv::imshow("Distance Transform", distTrans);

    //threshold the distance transformed image
    cv::threshold(distTrans, distTrans, 0.4, 1.0, cv::THRESH_BINARY);

    //dilate the image
    cv::Mat newKernel = cv::Mat::ones(3, 3, CV_8U);
    cv::dilate(distTrans, distTrans, newKernel);
    cv::imshow("Peaks", distTrans);

    cv::Mat dist8;
    distTrans.convertTo(dist8, CV_8U);

    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(dist8, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    cv::Mat marker = cv::Mat::zeros(distTrans.size(), CV_32S);

    //forground
    for(size_t i = 0; i < contours.size(); i++){
        cv::drawContours(marker, contours, static_cast<int>(i), cv::Scalar(static_cast<int>(i)+1), -1);
    }

    cv::circle(marker, cv::Point(5, 5), 3, cv::Scalar(255), -1);
    cv::Mat mark8;
    marker.convertTo(mark8, CV_8U, 10);
    cv::imshow("Markers", mark8);

    //watershed marker image
    cv::watershed(resultImg, marker);

    cv::Mat newMark;
    marker.convertTo(newMark, CV_8U);
    cv::bitwise_not(newMark, newMark);
    //cv::imshow("New Mark", newMark);

    //colors
    std::vector<cv::Vec3b> colors;

    for(size_t i = 0; i < contours.size(); i++){
        int b = cv::theRNG().uniform(0, 256);
        int g = cv::theRNG().uniform(0, 256);
        int r = cv::theRNG().uniform(0, 256);
        colors.push_back(cv::Vec3b((uchar)b, (uchar)g, (uchar)r));
    }

    //final image
    cv::Mat final = cv::Mat::zeros(marker.size(), CV_8UC3);

    //fill with random colors
    for(int i = 0; i < marker.rows; i++){
        for(int j = 0; j < marker.cols; j++){
            int index = marker.at<int>(i, j);
            if(index > 0 && index <= static_cast<int>(contours.size())){
                final.at<cv::Vec3b>(i, j) = colors[index - 1];
            }
        }
    }

    //output final
    cv::imshow("Final Image", final);
    cv::waitKey();


    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

