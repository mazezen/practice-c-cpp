#include <stdio.h>

int main()
{

    int c;
    // != 运算符的优先级高于 = 赋值运算符. 所以 (c = getchar()) 要用小括号括起来
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }

    return 0;
}
