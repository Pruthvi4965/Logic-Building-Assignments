/*
Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input :
“Marvellous Multi OS”
M
Output :11

Input :“Marvellous Multi OS”
W
Output :-1

Input :“Marvellous Multi OS”
 e
Output : 4
*/
#include<stdio.h>

int LastChar(char *str, char ch)
{
    // Logic
    int iCnt = 0,indx = -1;

    while (*str != '\0')
    {
        /* code */
        if(*str == ch)
        {
             indx = iCnt;
        }
    
        iCnt++;
        str++;

    }
   return indx;
    
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
    iRet = LastChar(arr, cValue);
    printf("Character location is %d", iRet);
    return 0;
}