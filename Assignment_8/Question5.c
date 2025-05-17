/*
write a program which accept area in square feet and convert it into square meter. 
(1 sqare feet = 0.0929 square meter)

Input: 5
Outut: 0.464515

Input: 7
Output: 0.650321

*/

#include<stdio.h>

#define SM_VAL 0.0929

double SquareMeter(int iValue)
{
  double dAns = 0;

  dAns = SM_VAL * iValue ;

 return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("area in Square meter is %f",dRet);

}