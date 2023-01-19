//program  to perform mathematucal functions on gropu of numbers 
#include<stdio.h>
int main()
{
 int n ; int i ; int sum=0 ; int b;
 int a; int j; int c; int mul=1 ; int o;
 printf("Choose 1 for addition and 2 for multiplication:");
 scanf("%d",&a);
 if(a==1){
   printf("Enter the number of terms you want:\n");
   scanf("%d",&i);
   b=i;

   while(i<=b){
     printf("Enter the number: \n");
     scanf("%d",&n);
     if(n<0){
       printf("The entered number is negative please enter a positive number");
       continue;
     }
     else{
      sum=sum+n;
     }
     i--;
     if(i==0){
      break;}
     }
     printf("The sum of the  entered numbers is :%d",sum);
 }
 else if(a==2){
   printf("Enter the number of terms you want:\n");
   scanf("%d",&j);
   c=j;
 
   while(j<=c){
     printf("Enter the number: \n");
     scanf("%d",&o);
     if(o<0){
       printf("The entered number is negative please enter a positive number:\n");
       continue;
     }
     else{
       mul=mul*o;
     }
     j--;
     if(j==0){
       break;}
     }
     printf("The multiplicatin of the entered numbers is :%d",mul);
 }
 else{
   printf("Enter the valid option bro");
 }
return 0;
}
