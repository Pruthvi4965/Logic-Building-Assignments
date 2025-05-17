/*
Accept amount in US dollar and return its corresponding value in Indian currency. 
Consider 1$ as 70 rupees. 

Input: 10
Outpt: 700

Input: 3
Output: 270

*/

#include<stdio.h>

int DollarToINR(int iNo)
{
int iChange = 0;
int iDollar = 70;
iChange = iNo * iDollar;

return iChange;
}


int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);
    return 0;
}
