
#include <iostream>
#include <opencv2/opencv.hpp>

#ifdef _DEBUG
#pragma comment(lib,"opencv_world470d.lib")
#else  //RELEASE
#pragma comment(lib,"opencv_world470d.lib")
#endif 


int main()
{
    // int a = 0; ���� �� �ʱ�ȭ
    // int b(0);  ��� �ʱ�ȭ
    std::cout << "Hello World!\n";
    std::string fileName = "jetson.bmp";
    cv::Mat img = cv::imread(fileName);
    return 0; //int ��ȯ
}
