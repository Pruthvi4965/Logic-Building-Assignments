//4. Accept two numbers from user and display first number in second number of times.

#include<stdio.h>

void Display(int iNO, int iFrequency)
{
    int icnt = 0;
   
    for(icnt = 1; icnt <= iFrequency; icnt++)
    {
        printf("%d\n",iNO);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("enter the number:");
    scanf("%d",&iValue);

    printf("enter the frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}