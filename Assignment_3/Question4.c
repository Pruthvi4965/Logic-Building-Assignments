/*
4. Accept one character from user and convert case of that character.

Input: a    Output: A

Input: D    Output: d

*/

#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char CValue)
{
    if (isupper(CValue))
    {
        printf("%c", tolower(CValue));
    }

    else if (islower(CValue))
    {
        printf("%c", toupper(CValue));
    }
}

int main()
{

    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}