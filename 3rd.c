#include<stdio.h>
int main ()
{
   int b; int h ;char t; int s; float a; 
   printf ("Is the triange an equilateral triange?:");
   scanf("%c",&t);
   if(t=='Y')
   { 
     printf("Enter the length of side");
     scanf("%d",&s);
     a= 1.73*s*s/4;
     printf("The area is :%f",a);
   }
   else
   {
     printf("Enter the length of base:\n");
     scanf("%d",&b);
     printf("Enter the length of height:\n");
     scanf("%d",&h);
     a= 0.5*b*h;
     printf("The area is :%f",a);
   }
   return 0;
}
