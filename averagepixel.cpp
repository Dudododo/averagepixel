#include <opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cv::Mat scrMat = imread("C:\\Users\\duzhi\\Pictures\\Saved Pictures\\1.jpg");
	int hight = scrMat.rows;
	int width = scrMat.cols;

	for (int j = 0; j < hight; j++)
	{
		for (int i = 0; i < width; i++)
		{
			uchar average = (scrMat.at<Vec3b>(j, i)[0] + scrMat.at<Vec3b>(j, i)[1] + scrMat.at<Vec3b>(j, i)[2]) / 3;
			scrMat.at<Vec3b>(j, i)[0] = average;
			scrMat.at<Vec3b>(j, i)[1] = average;
			scrMat.at<Vec3b>(j, i)[2] = average;

		}
	}
	imshow("ImputImage", scrMat);

	waitKey(0);
	return 0;
}
