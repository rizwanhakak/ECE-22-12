#include <stdio.h>
int main()
{
    int  n, sum = 0;

    printf("The first 10 natural numbers are :\n");

    for (n = 1; n <= 10; n++)
    {
        sum = sum + n;

    }
    printf("\nThe Sum is : %d\n", sum);
}
