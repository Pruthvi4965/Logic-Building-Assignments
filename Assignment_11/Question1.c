/*
Accept number from user and display below pattern

 input: 5
 Ouput: A B C D E

*/
#include <stdio.h>

void Pattern(int iNo)
{
    char iCh = '\0';
    int i = 0;
    for (i = 1,iCh = 'A'; i <= iNo; i++ ,iCh++)
    {

            printf("%c \t", iCh);
        
    }
}

int main()
{
    int iVal = 0;
    printf("Enter number : ");
    scanf("%d", &iVal);
    Pattern(iVal);
    return 0;
}
