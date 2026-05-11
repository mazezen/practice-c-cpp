#include <stdio.h>

// 练习 1-6 验证表达式getchar() != EOF 的值是 0还是 1
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        printf("%d", (c = getchar()) != EOF); // 1
    }

    return 0;
}
