//A simple OpenCV program that loads an image from disk and displays it on the screen
#include <opencv2/opencv.hpp>
#include <iostream>
int main(int argc, char** argv)
{
    if(argc<2)
    {
        std::cout << "参数缺少" << std::endl;
        exit(-1);
    }
    cv::Mat img = cv::imread(argv[1], -1);
    if(img.empty())
    {
        std::cout << "空图像" << std::endl;
        exit(-1);
    }
    cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
    cv::imshow("Example1", img);
    cv::waitKey(0);
    cv::destroyWindow("Example1");
    return 0;
}
