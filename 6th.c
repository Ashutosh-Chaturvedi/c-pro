#include<stdio.h>
int main()
{
  int a, b, c;
  printf("Enter the three number:");
  scanf("%d %d %d",&a,&b,&c);
  if( a> b; a> c ){
    printf("The first number is greatest");
  }
  else if(b>a;b>c;){
    printf("The second number is greatest");
  }
  else if(c>a;c>b;){
    printf("The third number is greatest");
  }
  else if(a=b,b=c,c=a){
    printf("All numbers are equal");
  }
  else{
    printf("Two of the numbers are equal");
  }
  return 0;
}
