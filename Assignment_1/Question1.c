/*
program to divide two numbers
*/

#include<stdio.h>
float Divide(int INo1, int INo2)
{
    int iAns = 0;
    if(INo2 == 0)
    {
        return -1;
    }
    iAns = INo1 / INo2;
    return iAns;
}
int main()
{
    int iValue1 = 15,iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);
    printf("Division is %d",iRet);

    return 0;
}