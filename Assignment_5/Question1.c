/*
write a program which take number from user and print that number of $ and * on screen.asm

Input: 5
Output: $ * $ * $ * $ * $ *

Input: 3
Output: $ * $ * $ *

*/

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char dollar = '$'; 
    char astric = '*';
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
     printf( "%c %c " ,dollar, astric);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}