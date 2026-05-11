// 编写一个程序, 把它的输入复制到输出, 并在此过程中把制表符换成\t、把回退符换成\b、把反斜杠换成\\。
// 这样可以使得制表符与回退符能以无歧义的方式可见

#include <stdio.h>

int main()
{
    int c = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}
