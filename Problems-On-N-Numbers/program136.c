#include<stdio.h>
#include<stdlib.h>

/// time complexity O(N)
int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
           iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Maximum(Brr, iLength);

    printf("Minimum from array is: %d",iRet);

    free(Brr);
    return 0;
}