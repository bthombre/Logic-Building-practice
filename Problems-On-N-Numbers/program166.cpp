#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
     private:
     int *Arr;
     int iSize;

     public:
      ArrayX()
     {
          iSize = 5;          
          Arr = new int[iSize];    
     }

     ArrayX(int x)
     {
          iSize = x;     
         Arr = new int[iSize];    
     }

     ~ArrayX()
     {
          delete []Arr;  // Resource De-allocation
     }

};

int main()
{
     ArrayX *aobj1 = new ArrayX(); /////     Default constructor
     ArrayX *aobj2 = new ArrayX(5);     //// Parameterised constructor

     // Function call

     delete aobj1;
     delete aobj2;

     return 0;
}