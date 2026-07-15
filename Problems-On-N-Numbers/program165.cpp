#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
     private:
     int *Arr;
     int iSize;

     public:
     ArrayX(int x)
     {
          iSize = x;          ///Characteristics of initialisation
          Arr = new int[iSize];    ////Resource allocation
     }

     ~ArrayX()
     {
          delete []Arr;  // Resource De-allocation
     }

};

int main()
{
     ArrayX *aobj = new ArrayX(5);

     // Function call

     delete aobj;

     return 0;
}