//*check if product of digits of a number at even and odd place is equal*//

#include <stdio.h>


int main(){
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int product_even = 1;
    int product_odd = 1;
    for(int i=0;i<size;i++){
        if(i%2 == 0){
            product_even*=arr[i];
        }else{
            product_odd*=arr[i];
        }
    }
    if(product_even == product_odd){
        printf("product of elements at even positions and odd positions are equal.\n");
    }else{
        printf("product of elements at even positions and odd positions are not equal.\n");
    }
    return 0;
}

    



        
    
