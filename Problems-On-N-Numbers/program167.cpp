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

};

int main()
{
     ArrayX *aobj1 = new ArrayX(); /////     parameterised constructor
     ArrayX *aobj2 = new ArrayX(15);     //// Parameterised constructor

     // Function call

     delete aobj1;
     delete aobj2;

     return 0;
}