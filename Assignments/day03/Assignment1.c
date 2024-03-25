//*Multiplication of bitwise operator*//


#include<stdio.h>
#include<math.h>
int mutiplyTwoNumbers(int a,int b)
{
    int result=0;
    while(b>0)
    {
        if(b&1)
        {
            result+=a;
        }
        a=a<<1;
        b=b>>1;
    }
    return result;
}
int main(void){
    int x=10;
    int y=20;
    printf("Product of %d and %d using bitwise operators is: %d",x,y,mutiplyTwoNumbers(x,y));
    return 0;
}
        
    
