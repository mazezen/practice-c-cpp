#include <stdio.h>

int max1(int a, int b)
{
    int z;
    if (a > b)
        z = a;
    else
        z = b;
    return z;
}

int max2(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("max: %d\n", max1(a, b));
    printf("max: %d\n", max2(a, b));

    return 0;
}
