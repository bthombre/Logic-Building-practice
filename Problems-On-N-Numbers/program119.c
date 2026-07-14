#include<stdio.h>
 
/////////////////////////////////////////
// Error due to without including library
///////////////////////////////////////
int main()
{
    int *Brr = NULL;

    int iLength = 0, iCnt = 0;

    // Step 1: Accept the number of elements
    printf("Enter number of elements : \n");
    scanf("%d",iLength);

    // Step 2: Allocate the memory
    Brr = (int *)malloc(iLength * sizeof(int));

    //Step 3:Accept the values from user
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    // Step 4: use the memory
    // Step 5: Deallocate the memory
    free(Brr);
    return 0;
}