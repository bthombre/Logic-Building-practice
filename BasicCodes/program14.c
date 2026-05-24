
//Even or odd
#include<stdio.h>

int CheckEvenOdd(int iNo)
{ 
    int iRem = 0;

    iRem = iNo%2;

    return iRem;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number to check it is even or odd:");
    scanf("%d",&iValue);
    
    iRet = CheckEvenOdd(iValue);
    
    if(iRet==0)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is odd",iValue);
    }

    return 0;
}