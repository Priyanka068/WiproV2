#include <stdio.h>


int main()
{
	int num;
    int i=1;
	
	printf("\nEnter the number to print the table: ");
	scanf("%d",&num);


        table:
			printf("%d * %d = %d\n",num,i,num*i);
            i++;
        if(i<=10){

            goto table;

        }

	return 0;
}