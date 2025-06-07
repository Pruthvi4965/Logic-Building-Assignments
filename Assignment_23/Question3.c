/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z

Input : m
Output :  m l k j i h g f e d c b a

Input : 8
Output :

*/
#include<stdio.h>

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c \t",ch);
        while (ch != 'Z')
        {
            ch = ch + 1;
            printf("%c\t",ch);
        }
    }
     if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c \t",ch);
        while (ch != 'a')
        {
            ch = ch - 1;
            printf("%c \t",ch);
        }
    }
    else{

    }
}
int main()
{
    char cValue = '\0';
    printf("Enter the character : ");
    scanf("%c", &cValue);
    Display(cValue);
    return 0;
}