/*
Write a program which accept string from user reverse that string
in place.

Input :“abcd”
Output :“dcba”
Input :“abba”
Output :“abba”
*/
#include <stdio.h>

void StrRevX(char *str)
{
    // Logic
    int iCnt = 0, iCount = 0;
    while (*str != '\0')
    {
        /* code */
        iCount++;
        str++;
    }

    str--;

    for (iCnt = iCount; iCnt > 0; iCnt--, str--)
    {
        printf("%c", *str);
    }
}
int main()
{
    char arr[20];
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);
    StrRevX(arr);
    return 0;
}