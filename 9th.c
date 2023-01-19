#include<stdio.h>
int main ()
{
 //Program to convert the celsius into Fahrenheit
 float C,F ;
 printf("Enter the temperature:\n");
 scanf("%f",&C);
 F= (( 1.8 ) * C ) + 32;
 printf("The temperature in Fahrenheit is %f:", F);
 return 0;
}
