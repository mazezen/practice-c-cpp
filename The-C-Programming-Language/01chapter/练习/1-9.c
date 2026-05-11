// 编写一个程序, 把它的输入复制到输出, 并在此过程中将相连的多个空格用一个空格代替
#include <stdio.h>

int main()
{
    int c = 0;
    int prev = 0; // 记录前一个字符串是否为空

    while ((c = getchar()) != EOF)
    {
        // 是空格字符
        if (c == ' ')
        {
            // 查看前一个字符标志位是不是空格,是空格继续记录
            if (prev == ' ')
            {
                prev = ' ';
            }
            else // 不是空格,输出.并且记录
            {
                putchar(c);
                prev = c;
            }
        }
        else
        {
            // 不是空格字符 直接输出, 并且将当前字符记录在 前一个字符标志位上
            putchar(c);
            prev = c;
        }
    }

    return 0;
}
