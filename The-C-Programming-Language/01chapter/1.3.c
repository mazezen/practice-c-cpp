#include <stdio.h>

int main()
{
    float fahr;
    printf("%6s\t%6s\n", "华氏度", "摄氏度");
    for (fahr = 0.0; fahr < 300; fahr += 20)
    {
        printf("%6.2f\t%6.2f\n", fahr, (fahr - 32) * (5.0 / 9.0));
    }

    // 练习 1-5 修改温度转换程序, 要求以逆序打印温度转换表, 即从300度到0度
    printf("%6s\t%6s\n", "华氏度", "摄氏度");
    for (float fahr = 300.0; fahr >= 0; fahr -= 20)
    {
        printf("%6.2f\t%6.2f\n", fahr, (fahr - 32) * (5.0 / 9.0));
    }

    // 摄氏度 - 华氏度 对照表
    float celisus;
    printf("%6s\t%6s\n", "摄氏度", "华氏度");
    for (celisus = 0.0; celisus <= 100; celisus += 10)
    {
        printf("%6.2f\t%6.2f\n", celisus, (celisus + 32) * (9.0 / 5.0));
    }

    return 0;
}
