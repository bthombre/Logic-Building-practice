///////////////////////////////////////////////////////////
//
//      Include required libraries
//
////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//      Function Name: AddTwoNumbers
//      Input  :       float, float
//      Output :       float
//      Description:   perform addition of 2 floats
//      Date :         08/05/2026
//      Author:        Badrinarayan Vitthal Thombre
//
/////////////////////////////////////////////////////////////
float AddTwoNumbers(
                     float fNo1,              //first input
                     float fNo2               //second input
                    )
{
    float fAns = 0.0f;                         //Variable to store result
    fAns = fNo1 + fNo2;                        //Perform addition
    return fAns;
}

/////////////////////////////////////////////////////////////
//
//      Application to perform Addition of 2 float values
//
/////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f;                     //To store first input
    float fValue2 = 0.0f;                     //To store second input
    float fResult = 0.0f;                     //To store the result

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1 , fValue2); 

    printf("addition is: %f",fResult);
    return 0;
}

/////////////////////////////////////////////////////////////
//
//      Input  : 11.0  10.0
//      Output : 21.0
//
/////////////////////////////////////////////////////////////