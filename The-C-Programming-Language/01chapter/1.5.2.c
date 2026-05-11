// 字符计数
#include <stdio.h>

int main()
{
    long nc;
    nc = 0;
    while ((nc = getchar()) != EOF)
        nc++;
    printf("字符数量: %ld\n", nc);

    return 0;
}
