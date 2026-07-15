#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
     public:
     int *Arr;
     int iSize;

     
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

     // Logic (Function call)

     cout<<aobj->iSize<<endl;
     delete aobj;

    
     return 0;
}