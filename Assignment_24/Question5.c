/*
Write a program which accept string from user and display it inn
reverse order.

Input :“MarvellouS”
Output :“SuollevraM”

*/
#include <stdio.h>

void Reverse(char *str)
{
    // Logic
    int iCount = 0;
    int iCnt = 0;
    while (*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    for (iCnt = iCount; iCnt > 0; iCnt--,str--)
    {
        printf("%c", *str);
    }
}

int main()
{
    char arr[20];
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);
    Reverse(arr);
    return 0;
}