#include<stdio.h>
int main(){
  float r ; float pi=3.14 ; float c , a ;
  printf("ENTER THE RADIUS OF THE CIRLCE: \n");
  scanf("%f",&r);
  c=2*pi*r;
  a=pi*r*r;
  printf("THE CIRCUMFERENCE OF THE CIRLCE IS %f AND THE AREA IS %f",c,a);
  return 0;
}
