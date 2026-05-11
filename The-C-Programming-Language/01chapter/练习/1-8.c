// 编写一个用于统计空格、制表符与换行符个数的程序

#include <stdio.h>

int main()
{
    long ns = 0;
    long nt = 0;
    long nn = 0;
    long c = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nn;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    printf("空格数: %ld; 制表符数: %ld; 换行符: %ld\n", ns, nt, nn);

    return 0;
}
