#include<stdio.h>
int main()
{
  char a;
  printf("Enter the character:\n");
  scanf("%c",&a);
  if(a>=65 && a<=90)
    {
      printf("An upper case letter.");
    }
  else if(a>=97 && a<=122)
    {
      printf("A lower case letter.");
    }
  else if(a>=48 && a<=57)
    {
      printf("A digit.");
    }
  else
    {
      printf("A special symbol.");
    }
  return 0;
}
