//*given number elemnts in descending order*//

#include<stdio.h>
#define CAP 30


int main(){

int num,max,min,i,j,temp;
int arr[CAP];
printf("\nEnter the element values of array\n");
    scanf("%d",&num);

 
    printf("\nEnter %d element values of array\n",num);
    for(int it=0;it<num;it++){
        scanf("%d",&arr[it]);

      }  

      for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){

            if(arr[i]<arr[j]){

                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }

      }
      for(i=0;i<num;i++){
        printf("%d\n",arr[i]);
      }

}

