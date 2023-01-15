/*#include<stdio.h>
int main ()
{
  int a,b,c;
  a=sizeof(int);
  b=sizeof(float);
  c=sizeof(char);
  printf("Size is %d %d %d",a,b,c);
  return 0;
}
*/
#include <stdio.h>
int main()
{ 
  printf("int is    %2d bytes \n", sizeof(short int));
  printf("long int is  %2d bytes \n", sizeof(long int));
  printf("float is    %2d bytes \n", sizeof(float));
  printf("double is   %2d bytes \n", sizeof(double));
  printf("long double is  %2d bytes \n", sizeof(long double));
  printf("char is   %2d bytes \n", sizeof(char));
  return 0;
}
