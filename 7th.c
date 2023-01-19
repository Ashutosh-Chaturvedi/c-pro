#include<stdio.h>
int main()
{
  float salary, gross, deduction,tax1, tax, hra;
  int p, e;
  printf("Enter your total salary(in rupees):");
  scanf("%f",&salary);

  if(salary >= 100000){
    printf("You are earning great keep it up...\n");
    printf("Is your tax percentage is about 33?(1 for yes)\n");
    scanf("%d",&p);
      if (p == 1){
         tax = salary * 0.33;
         printf("Money taken by government as tax is ₹%f\n",tax);
      }
      else{
         printf("Enter the percent of tax being implented\n");
         scanf("%d", &e);
         tax = salary * e/100;
         printf("Money taken by government as tax is ₹%f\n",tax);
      }
    hra= salary * 0.07;
    printf("Your H.R.A. is ₹%f \n",hra);
    deduction = tax + hra;
    printf("Total deduction is ₹%f\n",deduction);
    gross = salary - deduction;
    printf("Your gross salary is ₹%f",gross);
  }
  else{
    printf("Is your tax percentage is about 18?(1 for yes)\n");
    scanf("%d",&p);
      if (p == 1){
         tax = salary * 0.18;
         printf("Money taken by government as tax is ₹%f\n",tax);
      }
      else{
         printf("Enter the percent of tax being implented\n");
         scanf("%d", &e);
         tax = salary * e/100;
         printf("Money taken by government as tax is ₹%f\n",tax);
      }
    hra= salary * 0.05;
    printf("Your H.R.A. is ₹%f\n",hra);
    deduction = tax + hra;
    printf("Total deduction is ₹%f\n",deduction);
    gross = salary - deduction;
    printf("Your gross salary is ₹%f",gross);
  }
return 0;
}
