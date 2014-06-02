#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
    Scalar red(255, 0, 0);
    Scalar green(0, 255, 0);
    Scalar blue(0, 0, 255);

    VideoCapture cap("../Follow1_480.MOV");
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    Mat image;

    while (cap.read(image)) {
        cv::imshow("image", image);
        cv::waitKey(1);
    }

    return 0;
}
