#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(void){
    Mat image = imread("back.png");
    if(image.empty()){
        cout << "Empty!" << endl;
        return EXIT_FAILURE;
    }
    Mat grayImage;
    cvtColor(image, grayImage, COLOR_RGB2GRAY);

    imwrite("backGray.png", grayImage);

    namedWindow("image", WINDOW_AUTOSIZE);
    namedWindow("gray image", WINDOW_NORMAL);

    imshow("image", image);
    imshow("gray image", grayImage);

    waitKey(0);

    return EXIT_SUCCESS;
}