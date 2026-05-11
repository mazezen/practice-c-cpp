#include <stdio.h>

int pow2(int base, int n);

int main()
{

    int i;
    for (i = 0; i < 10; i++)
        printf("%d - %d - %d\n", i, pow2(2, i), pow2(-3, i));

    return 0;
}

int pow2(int base, int n)
{
    int p;

    for (p = 1; n > 0; n--)
        p = p * base;

    return p;
}
