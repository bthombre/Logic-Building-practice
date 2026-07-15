#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
     public:
     int *Arr;
     int iSize;

     // default constructor
     ArrayX()
     {

     }

     // parameterised constructor
     ArrayX(int x)
     {
          cout<<"Inside constructor";
          iSize = x;          ///Characteristics of initialisation
          Arr = new int[iSize];    ////Resource allocation
     }

     // Destructor
     ~ArrayX()
     {
          cout<<"inside destructor";
          delete []Arr;  // Resource De-allocation
     }

};

int main()
{
     // Static memory allocation for object
     // ArrayX aobj1(5);
    
     ArrayX *aobj = new ArrayX(5);
     return 0;
}