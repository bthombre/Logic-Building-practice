
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

    printf("Enter number:");
    scanf("%d",&iValue);
    
    iRet = CheckEvenOdd(iValue);
    
    if(iRet==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}