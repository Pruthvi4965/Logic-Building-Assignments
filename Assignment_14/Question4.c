/*
Accept number of rows and collumns from user and display below pattern

Input:   iRows = 5 iCol = 5

Output:
         1  2  3  4  5
        -1 -2 -3 -4 -5
         1  2  3  4  5
        -1 -2 -3 -4 -5
         1  2  3  4  5

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum1 = 1;
    int iNum2 = -1;

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) == 0)
        {
            for (j = 1, iNum2 = -1; j <= iCol; j++, iNum2--)
            {
                printf(" %d \t", iNum2);
            }
        }
        if ((i % 2) != 0)
        {
            for (j = 1, iNum1 = 1; j <= iCol; j++, iNum1++)
            {
                printf(" %d \t", iNum1);
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
