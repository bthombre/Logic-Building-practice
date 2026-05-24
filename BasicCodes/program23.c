// input filters
#include <stdio.h>

//user defined macro
#define AGE_INVALID -1

int CalculateTicketPrice(int iAge)
{
    //Input filter
    if(iAge < 0)
    {
        return AGE_INVALID;
    }

    if (iAge >= 0 && iAge <= 5)
    {
        return 0;
    }
    else if (iAge >= 6 && iAge <= 18)
    {
        return 500;
    }
    else if (iAge >= 19 && iAge <= 50)
    {
        return 900;
    }
    else
    {
        return 400;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("please enter your Age to calculate ticket price: ");
    scanf("%d", &iValue);
    iRet = CalculateTicketPrice(iValue);
    if(iRet == -1)
    {
        printf("please enter positive age\n");
    }
    else
    {
    printf("Your ticket price will be %d rupees\n", iRet);
    }
    return 0;
}