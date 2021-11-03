#include <iostream>
#include "yolo.h"
#include<vector>
#include <string>
#include<opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
using namespace std;
using namespace cv;
using namespace dnn;
int main()
{
	string img_path = "/home/fut/ai/yolov5onnx_opencv/test.jpg";
	string model_path = "/home/fut/ai/yolov5-6.0/pre-model/yolov5s.onnx";
 
	Yolo test;
	Net net;
	if (test.readModel(net, model_path, true)) {
		cout << "read net ok!" << endl;
	}
	else {
		return -1;
	}
 
	//生成随机颜色
	vector<Scalar> color;
	srand(time(0));
	for (int i = 0; i < 80; i++) {
		int b = rand() % 256;
		int g = rand() % 256;
		int r = rand() % 256;
		color.push_back(Scalar(b, g, r));
	}
	vector<Output> result;
	Mat img = imread(img_path);
	if (test.Detect(img, net, result)) {
		test.drawPred(img, result, color);
 
	}
	else {
		cout << "Detect Failed!"<<endl;
	}
 
	
	system("pause");
    return 0;
}
