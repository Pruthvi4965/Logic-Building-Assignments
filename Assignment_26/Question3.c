/*
Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.
Input :
“Marvellous Multi OS”
M
Output :0
Input :“Marvellous Multi OS”
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    // Logic
    int iCount = 0;

    while (*str != '\0')
    {
        /* code */ 
        iCount++;
        if ((*str == ch))
        {
            break;
        }
        str++;
    }
    if()
    {
        return iCount;
    }
    else{
        return -1;
    }

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
    iRet = FirstChar(arr, cValue);
    printf("Character location is %d", iRet);
    return 0;
}