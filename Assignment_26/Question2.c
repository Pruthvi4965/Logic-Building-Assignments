/*
Write a program which accept string from user and accept one
character. Return frequency of that character.

Input :
"Marvellous Multi OS"
M
Output :2
Input :"Marvellous Multi OS"
W
Output :
0

*/
#include <stdio.h>

int CountChar(char *str, char ch)

{
    // Logic
    int iCount = 0;
    int iConst = 0;
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        iConst = 32;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        iConst = -32;
    }
    else
    {
        iConst = 0;
    }

    while (*str != '\0')
    {
        /* code */
        if ((*str == ch) || (*str == (ch + iConst)))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);
    printf("Enter the character : ");
    scanf(" %c", &cValue);
    iRet = CountChar(arr, cValue);
    printf("Character frequency is %d", iRet);
    return 0;
}