// *Rotate array every kth element input no of the element in the list*//

#include <stdio.h>

//function to reverse a position of the array
void reverse(int arr[],int start,int end)
{
    while(start,end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
//function to rotate every kth element in the array
void rotateKthElement(int arr[],int n,int k)
{
    for(int i = k - 1;i<n;i+=k*2)
    {
        int start = i - k + 1;
        int end = i < n - 1 ? i: n - 1;
        reverse(arr,start,end);
    }
}

int main()
{
    int n,k;
    printf("No of the Elements in  the list:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element:");
    for(int i =0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("k=");
    scanf("%d",&k);

    rotateKthElement(arr,n,k);

    printf("Output:");
    for(int i = 0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}