//*first line of input contains T test cases second line of input contains a positive integer n*//

#include <stdio.h>

int main()
{
    int N;
    int it;
    scanf("%d", &N);
    if (N >= 2 && N <= 10)
    {
        for (it = 1; it <= (N * N); it++)
        {
            if (it % N == 0)
                printf("%d\n", it);
            else
                printf("%d*", it);
        }
        printf("\n\n");
    }

    return 0;
}