#include<stdio.h>

void CallbyAddress(int *iPtr)
{
    (*iPtr)++;
}

int main()
{
    int iValue = 11;

    CallbyAddress(&iValue);     /// CallByAddress(11)

    printf("Value after function call : %d\n",iValue);
    
    return 0;
}