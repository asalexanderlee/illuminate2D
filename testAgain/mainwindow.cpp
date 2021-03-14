#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cv::Mat pic = cv::imread("/Users/emmaholthouser/Desktop/mrs professional woman/pom_pic.png");
    if (pic.data == NULL)
        {
            std::cout << "No image found! Check path." << std::endl;
            //return 1;//ERROR
        }
        else
        {
    cv::namedWindow("My image");
    cv::imshow("My Image", pic);
    cv::waitKey();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

