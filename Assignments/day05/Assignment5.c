//* Print Number start right triangle pattern //*

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    int count = 1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++){
            if(j!=1){
                printf("*");
            }
            printf("%d",count++);
        }
        printf("\n");
    }
    return 0;
        
    }
