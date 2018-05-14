#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(void){
    Mat source, scaleDown, scaleUp, scale640x480;

    source = imread("dog.jpg", 1);

    double scaleX = 0.6;
    double scaleY = 0.6;

    resize(source, scaleDown, Size(), scaleX, scaleY, INTER_LINEAR);
    resize(source, scaleUp, Size(), scaleX*3, scaleY*3, INTER_LINEAR);
    resize(source, scale640x480, Size(640, 480), 640, 480, INTER_LINEAR);

    Mat crop = source(Range(50, 300), Range(0, 350));

    namedWindow("Original", WINDOW_AUTOSIZE);
    namedWindow("Scaled Down", WINDOW_AUTOSIZE);
    namedWindow("Scaled Up", WINDOW_AUTOSIZE);
    namedWindow("Cropped Image", WINDOW_AUTOSIZE);
    namedWindow("Image 640x480", WINDOW_AUTOSIZE);

    imshow("Original", source);
    imshow("Scaled Down", scaleDown);
    imshow("Scaled Up", scaleUp);
    imshow("Cropped Image", crop);
    imshow("Image 640x480", scale640x480);

    waitKey(0);
}