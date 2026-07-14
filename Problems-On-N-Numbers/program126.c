#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCount = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iCount++;
        }
    }

    return iCount;
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

    iRet = CountOdd(Brr, iLength);
    printf("Odd elements are: %d",iRet);

    return 0;
}