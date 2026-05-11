/**
 * 重新编写将大写字母转换为小写字母的函数 lower，并用条件表达式替代其
 * 中的 if-else 结构
 */

#include <stdio.h>

int lower1(int s)
{
    return (s >= 'A' && s <= 'Z') ? s + ('a' - 'A') : s;
}

int main()
{

    printf("lower s: %c\n", lower1('A'));

    return 0;
}
