#include <opencv2/opencv.hpp>
#include <bits/stdc++.h>

using namespace cv;
using namespace std;

int main(){
    Mat A(4,3, CV_32FC2, Scalar(0.5, 2.5));
    //S - signed
    //U - unsigned
    //F - float
    //CV_{qtd bits}{S|U|F}C{qtd channels}
    cout << "Matriz 4x3 8bits Float 2 channels (0.5, 2.5)" << endl;
    cout << A << endl << endl;

    int size[] = {6, 4}; // {row, col}
    Mat L(2, size, CV_32S, Scalar::all(-1000));
    //({dimensions},{array},CV_{...},{initialize values})
    cout << "Matriz 6x4 32bits Signed 1 channel (initialize -1000)" << endl;
    cout << L << endl << endl;

    Mat M;
    M.create(3, 2, CV_16UC(3));
    cout << "Matriz 3x2 16bits Unsigned 3 channels (value random)" << endl;
    cout << M << endl << endl;

    Mat O = Mat::ones(2,2, CV_8U);
    cout << "Matriz ones" << endl;
    cout << O << endl << endl;

    Mat Z = Mat::zeros(2,2,CV_8U);
    cout << "Matriz zeros" << endl;
    cout << Z << endl << endl;

    Mat I = Mat::eye(3,3,CV_8U);
    cout << "Matriz identity" << endl;
    cout << I << endl << endl;

    Mat V = (Mat_<double>(2,3) << 0, 1, 2, 3, 4, 5);
    cout << "Matriz initialize for values" << endl;
    cout << V << endl << endl;

    


    return 0;
}