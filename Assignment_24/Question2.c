/*
Write a program which accept string from user and count number of
small characters.

Input :“Marvellous”
Output :9
*/

#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    // Filter
    while (*str != '\0')
    {
        // Logic

        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        *str++;

    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);
    iRet = CountSmall(arr);
    printf("%d", iRet);
    return 0;
}