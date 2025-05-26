/*
Accept number of rows and collumns from user and display below pattern

Input:   iRows = 4 iCol = 4

Output:
        A B C D
        a b c d
        A B C D
        a b c d
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char chr1 = '\0', chr2 = '\0';

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) == 0)
        {
            for (j = 1, chr2 = 'a'; j <= iCol; j++, chr2++)
            {
                printf(" %c \t", chr2);
            }
        }
        else
        {
            for (j = 1, chr1 = 'A'; j <= iCol; j++, chr1++)
            {
                printf(" %c \t", chr1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns :  ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
