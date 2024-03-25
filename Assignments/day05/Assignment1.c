#include <stdio.h>


int main()
{
	int A,B,C;
	
	printf("\nEnter the number A,B and C: ");
	scanf("%d%d%d",&A,&B,&C);

		if(A>=B && A>C)
		{

			printf("%d is the greatest number.",A);

		}
		else if(B>=A && B>=C)
		{

			printf("%d is the greatest number.",B);

		}
		else
		{
			printf("%d is the greatest number.",C);
		}

	return 0;
}