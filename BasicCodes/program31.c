#include<stdio.h>

void display(int iNo)
{
    //Filter
    if (iNo<0)
    {
        printf("Invalid input");
        return;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    printf("%d: Jay ganesh\n",iCnt);
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