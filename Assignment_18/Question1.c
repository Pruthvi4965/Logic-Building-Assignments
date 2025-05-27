/*
Accept N number from user and return difference between summation of even elements and summation of odd elements

inputs:   N : 6

         Elements: 85 66 3 80 93 88

Output:  53  (234 -181)
*/

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSumEvn = 0,iSumOdd = 0;
    int iDeff = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if( (Arr[iCnt] % 2 ) == 0 )
        {
            iSumEvn = iSumEvn + Arr[iCnt];
        }
        if( (Arr[iCnt] % 2 ) != 0 )
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    iDeff = (iSumEvn - iSumOdd);
    
    return iDeff;  
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("unable to allote memory");
        return -1;
    }

    printf("enter elements:");
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter %d number : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    iRet = Difference(p, iSize);

    printf("difference between even and odd are : %d", iRet);

    free(p);

    return 0;
}
