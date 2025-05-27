/*

Accept N number from user and return frequency of even number and odd number.

inputs:  N : 6
         Elements: 85 66 3 80 93 88

Output:  0 (3 - 3)

*/

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFreqEvn = 0, iFreqOdd = 0;
    int iFreqDeff = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iFreqEvn++;
        }
        if ((Arr[iCnt] % 2) != 0)
        {
            iFreqOdd++;
        }
    }
    iFreqDeff = (iFreqEvn - iFreqOdd);

    return iFreqDeff;
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
    iRet = Frequency(p, iSize);

    printf("difference between frequency of even and odd are : %d", iRet);

    free(p);

    return 0;
}
