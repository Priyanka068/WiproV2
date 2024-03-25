//*An array of A of N numbers thetask is to find the where equilibrium first occurs in the array. is a position such that 
//the sum of elements before it is equal tothe sum of elements arter it //*


#include <stdio.h>

int findEquilibrium(int arr[],int n){
    int total_sum =0;
    int left_sum =0;
    //calculate the total sum of elements in array
    for(int i = 0;i<n;i++){
        total_sum += arr[i];
    }

    for(int i = 0;i<n;i++){
        total_sum -= arr[i];
        if(left_sum == total_sum){
            return i;
        }
        left_sum += arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {-7,1,5,2,-4,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int equilibrium_index=findEquilibrium(arr,n);
    if (equilibrium_index != -1)
    {
        printf("The equilibrium point is at index %d\n",equilibrium_index);
    }else{
        printf("There is no equilibrium point in the array\n");
        return 0;
    }

}
