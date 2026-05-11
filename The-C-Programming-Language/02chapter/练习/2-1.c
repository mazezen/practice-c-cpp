// 编写一个程序以确定分别由 signed 及 unsigned 限定的 char、short、
// int 与 long 类型变量的取值范围。采用打印标准头文件中的相应值以及直接计算两种方式实
// 现。后一种方法的实现较困难一些，因为要确定各种浮点类型的取值范围

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("=== 使用 <limits.h> 中的常量 ===\n");

    /* signed 类型 */
    printf("signed char : %d ~ %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed short: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("signed int  : %d ~ %d\n", INT_MIN, INT_MAX);
    printf("signed long : %ld ~ %ld\n", LONG_MIN, LONG_MAX);

    /* unsigned 类型 */
    printf("unsigned char  : 0 ~ %u\n", UCHAR_MAX);
    printf("unsigned short : 0 ~ %u\n", USHRT_MAX);
    printf("unsigned int   : 0 ~ %u\n", UINT_MAX);
    printf("unsigned long  : 0 ~ %lu\n", ULONG_MAX);

    printf("\n=== 通过计算得到（模拟直接计算方式） ===\n");

    /* 通过计算得到范围 */
    printf("signed char:   %d ~ %d\n", -(1 << (sizeof(char) * 8 - 1)), (1 << (sizeof(char) * 8 - 1)) - 1);
    printf("signed short:  %d ~ %d\n", -(1 << (sizeof(short) * 8 - 1)), (1 << (sizeof(short) * 8 - 1)) - 1);
    printf("signed int:  %d ~ %d\n", -(1 << (sizeof(int) * 8 - 1)), (1 << (sizeof(int) * 8 - 1)) - 1);

    printf("unsigned char : 0 ~ %u\n", (unsigned char)~0U);
    printf("unsigned short: 0 ~ %u\n", (unsigned short)~0U);
    printf("unsigned int  : 0 ~ %u\n", ~0U);
    printf("unsigned long : 0 ~ %lu\n", ~0UL);

    /* 浮点型 */
    printf("\n=== 浮点类型范围 (<float.h>) ===\n");
    printf("float  : %e ~ %e\n", FLT_MIN, FLT_MAX);
    printf("double : %e ~ %e\n", DBL_MIN, DBL_MAX);
    printf("long double : %Le ~ %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
