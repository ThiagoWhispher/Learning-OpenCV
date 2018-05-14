#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(void){
    Mat source, imageRotate, result;

    source = imread("dog.jpg", 1);

    Point2f center(source.cols/2, source.rows/2);
    double rotationAngle = 30;
    double scale = 1;

    imageRotate = getRotationMatrix2D(center, rotationAngle, scale);
    cout << imageRotate << endl;

    warpAffine(source, result, imageRotate, Size(source.cols, source.rows));
    
    namedWindow("Original Image", WINDOW_AUTOSIZE);
    namedWindow("Rotated Image", WINDOW_AUTOSIZE);

    imshow("Original Image", source);
    imshow("Rotated Image", result);

    waitKey(0);
}