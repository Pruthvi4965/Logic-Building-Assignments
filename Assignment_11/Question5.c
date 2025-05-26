// Input : 4
// Output : 2 4 6 8


#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    
    for( i = 1; i <= (iNo*2); i++ )
    {
        if((i % 2) == 0)
        {
            printf("%d\t",i);
        }  
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