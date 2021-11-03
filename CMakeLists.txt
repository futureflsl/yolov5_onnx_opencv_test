cmake_minimum_required (VERSION 3.10)
project(yolov5onnx_opencv)
# 添加c++ 11标准支持
set( CMAKE_CXX_FLAGS "-std=c++11" )
set(OpenCV_DIR /home/fut/000/opencv4.5.4/install/lib/cmake/opencv4)
find_package( OpenCV 4 REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})
# name of executable file and path of source file
add_executable(main main.cpp yolo.h yolo.cpp)
# directory of opencv library
link_directories(${OpenCV_LIBRARY_DIRS})
# opencv libraries
target_link_libraries(main ${OpenCV_LIBS})

