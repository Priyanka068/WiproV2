// *find the nth number made of prime digits
//Input formate: First line of input contains T Number of Test Cases
// seconf line of input contains an input Number N *//

#include <stdio.h>
#include <stdbool.h>

//function to check if a number is prime
bool isPrime(int n)
{
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5;i*i<=n;i+=6)
    {
        if(n%i == 0 || n%(i+2) == 0)
        return false;
    }
    return true;
}
// function to generate the nth number made of prime digits
int nthPrimeDigits(int n)
{
    int count = 0,num = 2;  //starting with 2
    while(count<n)
    {
        if(isPrime(num))
        {
            count++;
        }
        num++;
    }
    return num-1;
}

int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        int result = nthPrimeDigits(N);
        printf("%d\n",result);
    }
    return 0;
}