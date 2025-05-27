/*

Accept N number from user and check wheather that numbers contain 11 or not.
1] inputs:   N : 6

         Elements: 85 66 11 80 93 88

    Output:  11 is present

2]   inputs:   N : 6

         Elements: 85 66 3 80 93 88

      Output:  11 is absent

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            bFlag = TRUE;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Enable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    bRet = Check(p, iSize);

    if (bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}