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
     ArrayX aobj1(5);  ////////  Default constructor
     ArrayX aobj2(5);  ////    parameterised constructor

     cout<<sizeof(aobj1)<<endl;    
     return 0;
}