#include <stdint.h>
#include <stdio.h>
#include <iostream> 
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main(){
    VideoCapture cap("rtsp://192.168.0.15:554/live.sdp");
    //VideoCapture cap("rtsp://192.168.0.15:556/live2.sdp");
    Mat frame;
    while(1){ 
         cap>>frame;
         if(frame.empty()){
           break;
         } 
  
         imshow("video",frame);
         waitKey(30);
    }
    return 0;
}
