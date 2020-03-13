// 12_threshold_adaptiveThreshold.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	//��ȡ���ص�һ��ͼƬ����imread("1.jpg",0)���������ֶ�ֵ��������ʾ����!
	//imread������ļ�·�����Ը����Լ���ʵ��·���޸ġ�
	Mat img = imread("C:/Users/lenovo/Desktop/����/1.jpg", 0);
	Mat result_img_threshold, result_img_adaptiveThreshold;

	threshold(img, result_img_threshold, 100, 255, THRESH_BINARY);

	adaptiveThreshold(img, result_img_adaptiveThreshold, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	imshow("test", img);
	imshow("threshold", result_img_threshold);
	imshow("adaptiveThreshold", result_img_adaptiveThreshold);
	//�ȴ��û�����.
	waitKey(0);
	return 0;
}
