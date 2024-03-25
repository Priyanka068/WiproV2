//*find the greatest and least number of the given list*//

#include <stdio.h>
#define CAP 50
int main()
{
    int num,max,min;
    int arr[CAP];

printf("\nEnter the element values of array\n");
    scanf("%d",&num);

 
    printf("\nEnter %d element values of array\n",num);
    for(int it=0;it<num;it++){
        scanf("%d",&arr[it]);

      }         
    max=arr[0];
    min=arr[0];
    for(int it=1;it<num;it++)
    {
        if(arr[it]>max)
        {
            max=arr[it];
        }
        if(arr[it]<min){
            min=arr[it];
        }
    }

    printf("The greatest number in the array is: %d",max);
    printf("The smallest number in the array is: %d",min);

    return 0;

}