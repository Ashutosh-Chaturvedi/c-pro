#include<stdio.h>
int main()
{
int n ; int i=1 ; int sum=0 ;
while(i<=5){
printf("Enter the number: \n");
scanf("%d",&n);
if(n<0){
printf("The entered number is negative please enter a positive number \n");
continue;
}
else{
sum=sum+n;

}i++;
}
printf("The sum of the five entered numbers is %d", sum);
return 0;
}
