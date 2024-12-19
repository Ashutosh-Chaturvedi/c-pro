#include<stdio.h>
#include<math.h>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    int count = 0;
    while(temp > 0){
        count++;
        temp = temp / 10;
    }
    printf("Count is %d \n", count);
    temp = n;
    int sum = 0;
    while(temp > 0){
        int digit = temp % 10;
        int product = power(digit, count);
        // printf("The digit is %d and the power is %d \n", digit, count);
        // printf("The product is %d \n" , product);
        sum = sum + power(digit, count);
        // printf("The sum if %d", sum);
        // printf("The product is %d \n" , pow(digit, count));
        // printf("The sum is %d \n" , sum);
        temp = temp / 10;
    }
    printf("The sum if %d \n", sum);
    if(sum == n){
        printf("The number is Armstrong \n");
    } else {
        printf("The number is not Armstrong \n");
    }
    return 0;
}