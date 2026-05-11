#include <stdio.h>

int main()
{
    // int fahr, celsius;
    // int lower, upper, step;

    // lower = 0;
    // upper = 300;
    // step = 20;

    // fahr = lower;
    // while (fahr <= upper)
    // {
    //     celsius = 5 * (fahr - 32) / 9;
    //     printf("%3d\t\%3d\n", fahr, celsius);
    //     fahr = fahr + step;
    // }

    // float fahr, celsius;
    // int lower, upper, step;
    // lower = 0;
    // upper = 300;
    // step = 20;

    // fahr = lower;
    // while (fahr < upper)
    // {
    //     celsius = 5.0 * (fahr - 32.0) / 9.0;
    //     printf("%6.2f\t%6.2f\n", fahr, celsius);
    //     fahr += step;
    // }

    // 练习 1-3

    // float fahr, celsius;
    // int lower, upper, step;
    // lower = 0;
    // upper = 300;
    // step = 20;
    // fahr = lower;
    // printf("%6s\t%6s\n", "华氏度", "摄氏度");
    // while (fahr < upper)
    // {
    //     celsius = (5.0 / 9.0) * (fahr - 32.0);
    //     printf("%6.2f\t%6.2f\n", fahr, celsius);
    //     fahr += step;
    // }

    // 练习 1- 4
    // 编写一个用于打印 摄氏度 与 华氏度对照表的程序
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;
    printf("%6s\t%6s\n", "摄氏度", "华氏度");
    while (celsius <= upper)
    {
        fahr = (celsius + 32) * (9.0 / 5.0);
        printf("%6.2f\t%6.2f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
