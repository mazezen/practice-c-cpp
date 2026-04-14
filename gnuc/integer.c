#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    // long long int min_value = -(1 << (sizeof(int) * 8 - 1));
    // long long int max_value = (1 << (sizeof(int) * 8 - 1)) - 1;
    // printf("The minimum value of int is: %lld\n", min_value);
    // printf("The maximum value of int is: %lld\n", max_value);

    printf("The minimum value of int is: %d\n", INT_MIN);
    printf("The maximum value of int is: %d\n", INT_MAX);

    printf("The minimum value of short int is: %d\n", SHRT_MIN);
    printf("The maximum value of short int is: %d\n", SHRT_MAX);

    printf("The minimum value of long int is: %ld\n", LONG_MIN);
    printf("The maximum value of long int is: %ld\n", LONG_MAX);

    printf("The minimum value of long long int is: %lld\n", LLONG_MIN);
    printf("The maximum value of long long int is: %lld\n", LLONG_MAX);

    printf("The minimum value of float is: %f\n", FLT_MIN);
    printf("The maximum value of float is: %f\n", FLT_MAX);

    printf("The minimum value of double is: %f\n", DBL_MIN);
    printf("The maximum value of double is: %f\n", DBL_MAX);

    printf("The minimum value of long double is: %Lf\n", LDBL_MIN);
    printf("The maximum value of long double is: %Lf\n", LDBL_MAX);

    return 0;
}
