/*
Start
    Accept number as No
    if No is completeley divisible by 2 
        then print Even
    otherwise
        print Odd
Stop.

Start
    Accept number as No
    Divide No by 2
    if reminder is 0 
        then print Even
    otherwise
        print Odd
Stop.
*/

//Even or odd
#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRem = 0;

    printf("Enter number:");
    scanf("%d",&iValue);
    
    iRem = iValue%2;

    if(iRem==0)
    {
        printf("THe number is Even\n");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}