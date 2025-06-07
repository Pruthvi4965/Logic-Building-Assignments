/*
Write a program which accept string from user and count number of
white spaces

Input: "Marvellous"
Output :0
Input :“MarvellouS Infosystems”
Output :1
Input :“MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output :5
*/

#include <stdio.h>

int CountWhite(char *str)
{
    // Logic
    int iCount = 0;
    while (*str != '\0')
    {
        /* code */
        if(*str == ' ')
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
    int iRet = 0;
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);
    printf("%d", iRet);

    return 0;
}