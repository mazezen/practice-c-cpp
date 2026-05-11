// for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
//      s[i] = c;

// 在不使用运算符&&或||的条件下编写一个与上面的 for 循环语句等价的循环语句

#include <stdio.h>

enum loop
{
    NO,
    YES
};
enum loop okloop = YES;

int main()
{
    i = 0;

    while (okloop == YES)
    {
        if (i >= lim - 1)
            okloop = NO;
        else if ((c = getchar()) == '\n')
            okloop = NO;
        else if (c == EOF)
            okloop == NO;
        else
        {
            s[i] = c;
            ++i;
        }
    }
    return 0;
}
