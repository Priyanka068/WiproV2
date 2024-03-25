/* store array from 1 to 100 */

#include<stdio.h>

int main()
{
    int numbers[100];
    int i; 

    //sorting numbers from 1 to 100 in array

    for(i=0;i<100;i++)
    {
        numbers[i] = i + 1;
    }

    //printing the array

    printf("Array elements from 1 to 100:\n");
    for(i=0;i<100;i++)
    {
        printf("%d  ",numbers[i]);
    }
    printf("\n\n");
    return 0;
}