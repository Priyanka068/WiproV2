/* sum of even and odd position values in the array*/

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int even = 0;
    int odd = 0;
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<size;i++)
    {
        if(i%2 == 0)
        {
            even+= arr[i];
        }
        else
        {
            odd+= arr[i];
        }
    }
    printf("Sum of even number:%d\n", even);
    printf("sum of odd number:%d\n", odd);
    return 0;
}
