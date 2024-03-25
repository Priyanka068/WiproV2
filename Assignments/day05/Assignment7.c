//*print the sum and product of digits of the number*//

#include<stdio.h>
int main(){

int N, digit, sum =0, product =1;
printf("Enter a Positive integer: ");
scanf("%d", &N);
 
 //calculate sum and product of digits
 int originalNumber = N;   //store the originalnumber to print later
 while (N > 0) {
    digit = N % 10;
    sum += digit;
    if(digit!=0)  //exclude multiplication by 0
    product *= digit;
    N /= 10;
 }

 // print the sum and product
 printf("Sum = %d\n",sum);
 printf("Product = %d\n", product);
 return 0;
 }