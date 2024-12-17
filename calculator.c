#include<stdio.h>

int main(){
    int a,b ;
    char operator;
    printf("Enter the first operand: ");
    scanf("%d",&a);
    printf("Choose the operator: \n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n");
    scanf(" %c",&operator);
    printf("Enter the second operand: ");
    scanf("%d",&b);
    switch (operator)
    {
    case '+':
        printf("The sum of %d and %d is %d",a,b,a+b);
        break;
    case '-':
        printf("The difference of %d and %d is %d",a,b,a-b);
        break;
    case '*':
        printf("The product of %d and %d is %d",a,b,a*b);
        break;
    case '/':
        printf("The Quotient when %d divided by %d is %d",a,b,a/b);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
    
}