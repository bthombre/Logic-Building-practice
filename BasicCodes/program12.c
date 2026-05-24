
//Even or odd
#include<stdio.h>

void CheckEvenOdd(int iNo)
{ 
    int iRem = 0;

    iRem = iNo%2;

    if(iRem==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd");
    }

}

int main()
{
    int iValue = 0;
  

    printf("Enter number:");
    scanf("%d",&iValue);
    
    CheckEvenOdd(iValue);
    return 0;
}