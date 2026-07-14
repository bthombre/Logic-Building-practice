#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/// time complexity O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int ival = 0;
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *Brr = NULL;

    int iLength = 0, iCnt = 0, iValue = 0;

    printf("Enter the number of element: ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int)*iLength);

    printf("Enter the elements: ");
    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the element that you want to search: ");
    scanf("%d",&iValue);

    bool bRet = NULL;

    bRet = LinearSearch(Brr, iLength,iValue);
    if(bRet == true)
    {
        printf("Element is present");
    }
    else
    {
        printf("Element is not present");
    }

    return 0;
}