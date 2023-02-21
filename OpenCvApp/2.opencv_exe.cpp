
#include <iostream>
#include <opencv2/opencv.hpp>

#ifdef _DEBUG
#pragma comment(lib,"opencv_world470d.lib")
#else  //RELEASE
#pragma comment(lib,"opencv_world470d.lib")
#endif 


int main()
{
    // int a = 0; 생성 후 초기화
    // int b(0);  즉시 초기화
    std::cout << "Hello World!\n";
    std::string fileName = "jetson.bmp";
    cv::Mat img = cv::imread(fileName);
    return 0; //int 반환
}
