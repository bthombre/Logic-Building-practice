#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0 ;iCnt < iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *Brr = NULL;

    int iLength = 0, iCnt = 0;

    // Step 1: Accept the number of elements
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2: Allocate the memory
    Brr = (int *)malloc(iLength * sizeof(int));

    //Step 3:Accept the values from user
    printf("ENter the elements: ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    // Step 4: use the memory
    int iRet = 0;
    iRet = Summation(Brr,iLength);
    printf("Summation of all elements is: %d",iRet);


    // Step 5: Deallocate the memory
    free(Brr);
    return 0;
}