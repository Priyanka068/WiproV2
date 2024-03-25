//*An element is leader if it is greater than all the element is always a leader*//


#include <stdio.h>

    void findLeaders(int arr[],int n){
    int max_from_right = arr[n-1];
    printf("Leaders: %d",max_from_right);

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max_from_right)
        {
            max_from_right = arr[i];
            printf("%d",max_from_right);
            
        }
    }
 }

int main(){
    int arr[] = {6,7,4,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findLeaders(arr,n);
    return 0;
}
