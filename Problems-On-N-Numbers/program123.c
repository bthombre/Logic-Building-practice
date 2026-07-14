#include<stdio.h>
#include<stdlib.h>

int summation(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *Brr = NULL;

    int iLength = 0, iCnt = 0;

    printf("Enter the number of element: ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int)*iLength);

    printf("Enter the elements: ");
    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    int iRet = 0;

    iRet = summation(Brr, iLength);
    printf("Summation of array is: %d",iRet);

    return 0;
}