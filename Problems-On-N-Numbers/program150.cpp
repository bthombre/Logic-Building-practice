#include<iostream>
using namespace std;

int Summation(int Arr[], int iSize)
{
     int iCnt = 0, iSum = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
          iSum = iSum + Arr[iCnt];
     }

     return iSum;
}

int main()
{
   int *Brr = NULL;

   int iLength = 0, iCnt = 0, iRet = 0;

   cout<<"Enter the number of elements: ";
   cin>>iLength;

   Brr = new int[iLength];

   cout<<"Enter the elements: ";
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        cin>>Brr[iCnt];
   }

   cout<<"Elements of the array are: ";
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        cout<<Brr[iCnt]<<endl;
   }

   iRet = Summation(Brr,iLength);

   cout<<"Suumation is: "<<iRet<<endl;
   
   delete []Brr;
   
    return 0;
}