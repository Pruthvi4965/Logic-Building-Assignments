// Accept Character from user and check whether it is capital or not
// (A-Z).

// Input : F
// Output : TRUE

// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    
// Apply condition to check whether it is capital or not.

BOOL chk = FALSE;
  
    if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
    {
        if((ch >= 'A') && (ch <= 'Z'))
        {
            chk = TRUE;
        }
       if((ch >= 'a') && (ch <= 'z'))
        {
            chk = FALSE;
        }
    }
    else 
    {
        
        return -1;
    }

   return chk ;

}
int main()
{
char cValue = '\0';
BOOL bRet = FALSE;
printf("Enter the character : ");
scanf("%c",&cValue);
bRet = ChkCapital(cValue);
if(bRet == TRUE)
{
printf("It is Capital Character\n");
}
else if(bRet == -1)
{
    printf("enter valid input");
}
else
{
printf("It is not a Capital Character\n");
}
return 0;
}