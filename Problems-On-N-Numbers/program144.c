#include<stdio.h>

void update(int Arr[], int iSize)
{
    int iCnt  = 0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        Arr[iCnt]++;
    }
}
int main()
{

    int Brr[] = {10,20,30,40,50};
    int iCnt = 0;

    printf("Array elements before function call: \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Brr[iCnt]);
    }

    update(Brr,5);

     printf("Array elements after function call: \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Brr[iCnt]);
    }
    return 0;
}