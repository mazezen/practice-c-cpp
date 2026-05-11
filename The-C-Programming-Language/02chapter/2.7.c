#include <stdio.h>

/* atoi1: convert s to integer */
int atoi1(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');

    return n;
}

/* lower1: convert c to lower case; ASCII only */
int lower1(int c)
{
    if (c >= 'A' && c <= 'z')
        return c + 'a' - 'A';
    else
        return c;
}

int main()
{

    printf("%d\n", atoi1("112"));   // 输出 112
    printf("%d\n", atoi1("12345")); // 输出 12345
    printf("%d\n", atoi1("0"));     // 输出 0
    printf("%d\n", atoi1("abc"));   // 输出 0（非数字）

    printf("%c\n", lower1('A'));

    return 0;
}
