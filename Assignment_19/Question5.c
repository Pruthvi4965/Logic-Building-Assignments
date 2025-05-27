/*

Accept N number from user and Accept one another number as NO , return Frequency of NO from it.

inputs:  N : 6
         NO : 80
         Elements: 85 15 3 80 93 88

Output:  1

*/

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNO)
{
    int iCnt = 0;
    int iFreq = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNO)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    int iNO = 0;
    int iRet = 0;
    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf("enter number to check frequency: ");
    scanf("%d", &iNO);

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
    iRet = Frequency(p, iSize, iNO);
    printf("frequency of %d is %d", iNO,iRet);

    free(p);
    return 0;
}