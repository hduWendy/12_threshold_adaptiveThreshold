// 12_threshold_adaptiveThreshold.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	//读取本地的一张图片处理imread("1.jpg",0)，并用两种二值化方法显示出来!
	//imread后面的文件路径可以根据自己的实际路径修改。
	Mat img = imread("C:/Users/lenovo/Desktop/推文/1.jpg", 0);
	Mat result_img_threshold, result_img_adaptiveThreshold;

	threshold(img, result_img_threshold, 100, 255, THRESH_BINARY);

	adaptiveThreshold(img, result_img_adaptiveThreshold, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	imshow("test", img);
	imshow("threshold", result_img_threshold);
	imshow("adaptiveThreshold", result_img_adaptiveThreshold);
	//等待用户按键.
	waitKey(0);
	return 0;
}
