//* product of digits at even place is divisible by sum of digits at odd place of a number*//

#include<stdio.h>
int main(){
    long long num;
    printf("Enter a number:");
    scanf("%lld", &num);

    int odd_sum = 0,even_product = 1;
    int count = 1;

    while(num>0){
        int digit = num %10;
        if(count % 2 == 0){
            even_product*=digit;
        }else{
            odd_sum += digit;
        }
        num/=10;
        count++;
    }
    
    if(odd_sum == 0){
        printf("Sum of digits at odd place is zero. Cannot divide by zero.\n");
    }else if(even_product % odd_sum == 0){
        printf("The product of digits at even place is  divisible by the sum od digits at odd place.\n");
    }else{
        printf("The product of digits at even place is not  divisible by the sum od digits at odd place.\n");
    }
    return 0;

    }