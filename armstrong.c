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
        sum = sum + power(digit, count);
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