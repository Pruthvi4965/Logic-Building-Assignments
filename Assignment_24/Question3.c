/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input :“MarvellouS”
Output :6   (8-2)

*/

#include <stdio.h>

int Difference(char *str)
{
    int iCntCptl = 0;
    int iCntSml = 0;
    int iDiff = 0;
    // Filter
    while (*str != '\0')
    {
        // Logic
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCptl++;
        }

        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCntSml++;
        }
        *str++;
    }
    
    iDiff = iCntSml - iCntCptl;

    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);
    iRet = Difference(arr);
    printf("%d", iRet);
    return 0;
}