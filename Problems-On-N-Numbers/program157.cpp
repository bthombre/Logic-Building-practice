#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
     public:
     int *Arr;
     int iSize;

     ArrayX()
     {

     }

     ArrayX(int x)
     {

     }
};

int main()
{
     ArrayX aobj1;  ////////  Default constructor
     ArrayX aobj2(5);  ////    parameterised constructor

     cout<<sizeof(aobj1)<<endl;     //// 16
     return 0;
}