/*
write a program which accept distance in kilometer and convert it into meter. (1 km = 1000 m)

Input: 5
OutPut: 5000

Input: 12
Output: 12000

*/

#include <stdio.h>

int KmToMeter(int iNo)
{
    int iMtr = 0;
    iMtr = iNo * 1000;
    return iMtr;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in km : ");
    scanf("%d", &iValue);

    iRet = KmToMeter(iValue);

    printf("disp=tance in meter is %d", iRet);
    return 0;
}