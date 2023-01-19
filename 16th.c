#include<stdio.h>
int main ()
{
   int a, b ,c ,i ;
   
   printf("Enter the numbers \n");
   scanf("%d %d %d ",&a, &b, &c);
   if(a>b)
    {
     if(a>c)
      { 
        printf("The first number is greatest");
      }
     if(a<c)
      {
        printf("The third number is greatest.");
      }
    }
   else if(b>a)
    {
     if(b>c)
      {
        printf("The second number is greatest.");
      }
    }
   else {
     printf(" numbers are equal");
   }
return 0;
}
    
