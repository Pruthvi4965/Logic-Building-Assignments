// Input : 3
// Output : * 1  # * 2 # * 3 #




#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    



    for( i = 1; i <= iNo; i++ )
    {
        printf("#\t%d\t*\t",i);
    }
}
int main()
{
    int iVal = 0;

    printf("Enter the number : \n");
    scanf("%d",&iVal);

    Pattern(iVal);


    return 0;
}