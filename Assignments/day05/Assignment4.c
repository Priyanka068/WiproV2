/*Print incrementing squared number*/

#include <stdio.h>

int main(){

    int N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    int count = 1;
	
	
    for(int i=0;i<N;i++){

        for(int j=1;j<=N;j++){
            if(j!=0){
                printf("*");
            }
            printf("%d",count++);
        }
        printf("\n");
    }
    return 0;
         


    }


