#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

int main(int argc, char** argv)
{
    if(argc<2)
    {
        std::cout << "参数缺少" << std::endl;
        exit(-1);
    }
    cv::namedWindow("Example3", cv::WINDOW_AUTOSIZE);
    cv::VideoCapture cap;
    cap.open(argv[1]);
    cv::Mat frame;
    while(true)
    {
        cap >> frame;
        if(frame.empty()) break;
        cv::imshow("Example3", frame);
        if(cv::waitKey(33) >= 0) break;
    }
}