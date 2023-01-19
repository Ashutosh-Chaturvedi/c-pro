#include<stdio.h>
int main ()
{
  // The program to find the factorial of the number 
  int a, fac=1, n;
  printf("Enter the number :\n");
  scanf("%d",&a);

  for(n=1;n<=a;n++){
    fac=fac*n  ;
    ;
  }
  printf("The factorial of the number is %d",fac);
return 0;
}
