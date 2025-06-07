/*
Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)

Input : C
Output : Your exam at 9.20 AM

Input : d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    // Logic
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("your exam is at 7 \n");
    }
     if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("your exam is at 8.30 \n");
    }
     if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("your exam is at 9.30 \n");
    }
     if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("your exam is at 10.30 \n");
    }
    else{
        printf("Division doesn't exist. choose between A,B,C,D");
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter your devision : ");
    scanf("%c", &cValue);
    DisplaySchedule(cValue);

    return 0;
}