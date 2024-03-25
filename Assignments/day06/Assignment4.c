//*An unsortes array a of size N of non-negative integers,find a continuous
//sub-array which adds to a given number sum*//


#include<stdio.h>
#define CAP 50

void findSubarray(int arr[],int n,int sum){
    int start = 0,end = 0,current_sum = arr[0];

    while(end<n){
        if(current_sum == sum){
            printf("Sum found %d and %d\n",start,end);
            return;
            }
            if(current_sum < sum){
                end++;
                if(end<n)
                current_sum +=arr[end];
            }
            else{
                current_sum -=arr[start];
                start++;
            }
            }
        }
int main()
{
    int num,sum;
    int arr[CAP];

printf("\nEnter the size of array\n");
    scanf("%d",&num);

 
    printf("\nEnter %d element values of array\n",num);
    for(int it=0;it<num;it++){
        scanf("%d",&arr[it]);

      } 
      printf("\nEnter the sum");
           scanf("%d",&sum);

           findSubarray(arr,num,sum);
}     