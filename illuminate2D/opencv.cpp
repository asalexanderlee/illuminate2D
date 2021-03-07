#include "opencv.h"
#include <opencv-4.5.1/modules/core/include/opencv2/core.hpp>
#include <opencv-4.5.1/modules/imgcodecs/include/opencv2/imgcodecs.hpp>
#include <opencv-4.5.1/modules/highgui/include/opencv2/highgui.hpp>
#include <opencv-4.5.1/modules/core/include/opencv2/core/utility.hpp>
#include <iostream>

using namespace cv;

OpenCV::OpenCV()
{}

void OpenCV::openImg(std::string filename){
    cv::String filenameCV = filename;
    //cv::String image_path = cv::samples::findFile(filenameCV, true, true);
    Mat img = imread(filename, IMREAD_COLOR);
    //if(img.empty()){
    //    std::cout << "Could not read the image: " << image_path << std::endl;
    //}
    //imshow("Display window", img);
    //int k = waitKey(0); // Wait for a keystroke in the window
    //if(k == 's'){
    //        imwrite("opencv_test.png", img);
    //}
}
