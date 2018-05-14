#include <opencv2/opencv.hpp>
#include <bits/stdc++.h>

using namespace cv;
using namespace std;

int main(){
    Mat a = imread("back.png", IMREAD_COLOR);
    Mat b, mask;
    a.copyTo(b, mask);
    cout << a.rows << endl;
    cout << a.cols << endl;
    cout << a.channels() << endl;
    cout << a.size() << endl;

    Size sz = a.size();
    cout << sz.height << endl;
    cout << sz.width << endl;

    namedWindow("color", WINDOW_NORMAL);
    namedWindow("grayscale", WINDOW_NORMAL);
    imshow("color", a);
    imshow("grayscale", b);
    waitKey(0);
}