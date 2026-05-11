/* 重新编写 1.2 节中的温度转换程序, 使用函数实现温度转换计算 */

#include <stdio.h>

float fahr_to_celsius(float f);

float celsius_to_fahr(float c);

int main()
{

    // fahr convert to celsius
    float c = fahr_to_celsius(200);
    printf("cersius = %6.2f\n", c);

    // celsius convert to fahr
    float f = celsius_to_fahr(99);
    printf("fahr = %6.2f\n", f);

    return 0;
}

float fahr_to_celsius(float f)
{
    return (f - 32) * 5 / 9;
}

float celsius_to_fahr(float c)
{
    return (c + 32) / 9 * 5;
}
