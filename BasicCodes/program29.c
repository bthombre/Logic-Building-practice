#include<stdio.h>

void display(int iNo)
{
    //updater
    if (iNo<0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    printf("Jay ganesh\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the frequency: ");
    scanf("%d",&iValue);

    display(iValue);
    return 0;
}