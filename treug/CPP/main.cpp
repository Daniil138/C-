#include "../Hfile/Geo.h"
#include "../Hfile/serch.h"
#include <iostream>



int main(){
    Point p1;
    Point p2;
    p1.x=1;
    p2.y=1;
    std::cout << p1 << "\n";


    int pointNum = 5;
    Point* pointArray = new Point[pointNum];

    pointArray[0].x = 1; 
    pointArray[1].x = 2;
    pointArray[2].x = 3;
    pointArray[3].x = 6;
    pointArray[4].x = 8;

    pointArray[0].y = 1;
    pointArray[1].y = -4;
    pointArray[2].y = 7;
    pointArray[3].y = -7;
    pointArray[4].y = 10;

    const int maxTrNum = 3;
    Triangle trArray[maxTrNum];

    searchLargestTriangles(pointArray, pointNum, trArray, maxTrNum);

    for( int i = 0; i < maxTrNum; i++){
        std::cout << trArray[i] << std::endl;
    }


}
