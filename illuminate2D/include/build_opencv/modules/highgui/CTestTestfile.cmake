# CMake generated Testfile for 
# Source directory: /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/opencv-4.5.1/modules/highgui
# Build directory: /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv/modules/highgui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_highgui "/Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv/bin/opencv_test_highgui" "--gtest_output=xml:opencv_test_highgui.xml")
set_tests_properties(opencv_test_highgui PROPERTIES  LABELS "Main;opencv_highgui;Accuracy" WORKING_DIRECTORY "/Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv/test-reports/accuracy" _BACKTRACE_TRIPLES "/Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/opencv-4.5.1/cmake/OpenCVUtils.cmake;1677;add_test;/Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/opencv-4.5.1/cmake/OpenCVModule.cmake;1311;ocv_add_test_from_target;/Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/opencv-4.5.1/modules/highgui/CMakeLists.txt;165;ocv_add_accuracy_tests;/Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/opencv-4.5.1/modules/highgui/CMakeLists.txt;0;")
