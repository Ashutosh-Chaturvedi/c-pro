#include<stdio.h>
int main ()
{
  float a,b,c,d,e, average;
  printf("Enter yours marks:\n");
  scanf("%f\t",&a);
  scanf("%f\t",&b);
  scanf("%f\t",&c);
  scanf("%f\t",&d);
  scanf("%f",&e);
  average= (a+b+c+d+e)/5;
  printf("Your average marks is : %f\n",average);
  if(average>=80.00)
  {  printf("Well Done....Keep it up..");
  }
  else{
     printf("Work hard..");
  }
return 0;
}
