////////////////////////////////////
//      to calculate the number of digits in given number
//
////////////////////////////////////
#include<stdio.h>

int Display(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
    iDigit = iNo%10;
    iCnt++;
    iNo = iNo /10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = Display(iValue);
    printf("number of digits in given number is: %d",iRet);
    
    return 0;
}