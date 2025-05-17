/*
Write a program which accept radius of circle from user and calculate its area.
Consider value of pi as 3.14(Area = pi*Radius*Radius)

Input: 5.3
Output:88.2026

Input: 10.4
Output: 339.6224

*/

#include<stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    dArea = PI * fRadius * fRadius; 
    return dArea;
}

int main()
{
    float fRadius = 0.0;
    double dRet = 0.0;
    printf("enter Radius of circle: ");
    scanf("%f", &fRadius);

    dRet = CircleArea(fRadius);

    printf("Area of circle is %.4f", dRet);

    return 0;
}