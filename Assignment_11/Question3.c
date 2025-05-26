// Input : 5
//Output : 1 # 2 # 3 # 4 # 5 #

// Input : 5
// Output : 5 # 4 # 3 # 2 # 1 #


#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    



    for( i = 1; i <= iNo; i++ )
    {
        printf("%d\t#\t",i);
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