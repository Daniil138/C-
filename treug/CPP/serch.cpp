#include <iostream>
#include "../Hfile/serch.h"
#include "../Hfile/Geo.h"



void searchLargestTriangles(const Point* pointArray, int pointNum, Triangle* trArray, int maxTrNum)
{
    
    Triangle Now_Tr;
    

    for(int i = 0; i < pointNum - 2; i++)
    {
        for(int k = i; k < pointNum - 1; k++)
        {
            for(int j = k; j < pointNum; j++)
            {
        
                Now_Tr.vertexes[0].x = pointArray[i].x;
                Now_Tr.vertexes[1].x = pointArray[k].x;
                Now_Tr.vertexes[2].x = pointArray[j].x;

                Now_Tr.vertexes[0].y = pointArray[i].y;
                Now_Tr.vertexes[1].y = pointArray[k].y;
                Now_Tr.vertexes[2].y = pointArray[j].y;

                Now_Tr.aria = Now_Tr.calc_arial();

                for(int l = 0; l < maxTrNum; l++)
                {
                    if (trArray[l].aria < Now_Tr.aria )
                    {
                        trArray[l] = Now_Tr;
                    }                  
                }
            }
        }            
    }

}