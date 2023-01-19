#include<stdio.h>
int main()
{
     int p; int r; int t; int i;
     printf("Enter the pricipal amount:");
     scanf("%d",&p);
     printf("Enter the rate of interest:");
     scanf("%d",&r);
     printf("Enter the time in year:");
     scanf("%d",&t);
     i=p*r*t/100;
     printf("The simple interest will be %d",i);
     return 0;
}
