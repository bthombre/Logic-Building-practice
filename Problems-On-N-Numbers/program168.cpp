#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
     private:
     int *Arr;
     int iSize;

     public:

     /// Parameterised constructor with default arguments
     ArrayX(int x = 5)
     {
          iSize = x;     
         Arr = new int[iSize];    
     }

     ~ArrayX()
     {
          delete []Arr;  // Resource De-allocation
     }

     void accept()
     {
          int iCnt =0;
          cout<<"Enter the elements";

          for(iCnt = 0; iCnt < iSize; iCnt++)
          {
               cin>>Arr[iCnt];
          }
     }

      void Display()
     {
          int iCnt =0;
          cout<<"elements of the array are: ";

          for(iCnt = 0; iCnt < iSize; iCnt++)
          {
               cout<<Arr[iCnt]<<endl;
          }
     }

     int Summation()
     {
          int iCnt = 0, iSum = 0;

          for(iCnt = 0; iCnt < iSize; iCnt++)
          {
               iSum = iSum + Arr[iCnt];
          }

          return iSum;
     }

};

int main()
{
     ArrayX *aobj = NULL;
     int iLength = 0, iRet = 0;

     cout<<"Enter the number of elements: ";
     cin>>iLength;

     aobj = new ArrayX(iLength);

     aobj->accept();
     aobj->Display();

     iRet = aobj->Summation();

     cout<<"summation is: "<<iRet<<endl;
     delete aobj;

     return 0;
}