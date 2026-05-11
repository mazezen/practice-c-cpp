#include <stdio.h>

#define LOWER 0   // 表的下限
#define UPPER 300 // 表的上限
#define STEUP 20  // 步长

int main()
{

    int fahr;
    printf("%6s\t%6s\n", "华氏度", "摄氏度");
    for (fahr = LOWER; fahr < UPPER; fahr += STEUP)
    {
        printf("%6d\t%6d\n", fahr, (fahr - 32) * 5 / 9);
    }

    return 0;
}
