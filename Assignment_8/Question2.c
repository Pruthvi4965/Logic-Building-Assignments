/*
write a program which accept width and height of rectangle from user and calculate its area. 
(Area = Width * Height)

input: 5.3 9.78
Output: 51.834

*/


#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fWidth = 0.0;
    float fHeight = 0.0;
    double dRet = 0.0;
    printf("enter width of rectangle: \n");
    scanf("%f", &fWidth);
    printf("enter height of rectangle: \n");
    scanf("%f", &fHeight);

    dRet = RectArea(fWidth, fHeight);

    printf("Area of rectangle is %.3f", dRet);

    return 0;
}