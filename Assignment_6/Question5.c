/*
Write a program which accept number from user and display its table in reverse order.

Input: 2
Output: 20 18 16 14 12 10 8 6 4 2

Input: 5
Output: 50 45 40 35 30 25 20 15 10 5

Input: -5
Output: 50 45 40 35 30 25 20 15 10 5

*/

#include<stdio.h>

void TableRev(int iNo)
{
int iCnt = 0;
int iTbl = 1;
for(iCnt = 10; iCnt >= 1; iCnt--)
{
  iTbl = iCnt * iNo;
  printf(" %d ",iTbl);
}
}
int main()
{
    int iVal = 0;
    printf("Enter number : ");
    scanf("%d", &iVal);

    TableRev(iVal);

    return 0;
}