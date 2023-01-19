/*#include<stdio.h>
#include<math.h>
int main(){
  int n, a , b, c;
  printf("Enter the number whose power you want: \n");
  scanf("%d",&n);
  a= pow(n,1);
  b= pow(n,2);
  c= pow(n,3);
  printf("The numbers are %d %d %d ", a,b,c);
return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
  /*Program By Ghanendra Yadav
    Visit http://www.programmingwithbasics.com/
    */
  int num,a,b,c;
  printf("\nEnter The Number .\n");
  scanf("%d",&num);
  a=num*num;
  b=num*num*num;
  c=num*num*num*num;
  printf("\nOutput Is\n\n");
  printf("%d  ,%d  ,%d \n\n",a,b,c);
  return 0;
}
