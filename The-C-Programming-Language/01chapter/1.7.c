#include <stdio.h>

int pow2(int m, int n);

/* test power function */
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d  - %d -  %d\n", i, pow2(2, i), pow2(-3, i));

    return 0;
}

int pow2(int base, int n)
{
    int i;
    int p = 1;

    for (i = 1; i <= n; ++i)
        p = p * base;

    return p;
}
