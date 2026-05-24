/*
Algorithm
/////////////////////////////////////////////////////////////
    Start
        Accept first number as No1
        Accept second number as No2
        Perform addition of No1 and No2
        Display the result
    Stop
/////////////////////////////////////////////////////////////
*/

#include<stdio.h>
int main()
{
    float i,j,k;
    printf("Enter first number:\n");
    scanf("%f",&i);

    printf("Enter second number:\n");
    scanf("%f",&j);

    k = i + j;

    printf("addition is: %f",k);
    return 0;
}