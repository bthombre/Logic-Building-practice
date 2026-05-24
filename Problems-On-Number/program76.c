#include<stdio.h>

int main()
{
    int iCnt = 0;
    int iNo = 751;
    int iDigit = 0;

    while(iNo != 0)
    {
    iDigit = iNo%10;
    printf("%d\t",iDigit);
    iNo = iNo /10;
    }
    return 0;
}