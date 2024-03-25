//*sum of distinct digits of both the numbers are equal if true print yes otherwise print no*//

#include<stdio.h>

int sumOfDistinctDigits(int num){
    int digits[10] ={0};
    int sum = 0;
    
    while (num>0){
        digits[num % 10]++;;
        num /= 10;
    }
    for(int i =0; i <10; i++){
        if (digits[i]>0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1, &num2);

    if(sumOfDistinctDigits(num1) == sumOfDistinctDigits(num2))
    {
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}
