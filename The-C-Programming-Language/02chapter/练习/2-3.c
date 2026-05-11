// 编写函数 htoi1(s), 把由十六进制数字组成的字符串 (包含可选的前缀0x或者0X)
// 转换为与之等价的整数值. 字符串中允许包含的数字包括: 0~9, a~f已经 A~F

#include <stdio.h>

#define YES 1
#define NO 0

/* htoi1: convert hexdecimal string to integer */
int htoi1(char s[])
{
    int hexdigit, i, inhex, n;

    i = 0;
    if (s[i] == '0')
    {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
            ++i;
    }

    n = 0;
    inhex = YES;
    for (; inhex == YES; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
            hexdigit = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            hexdigit = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            hexdigit = s[i] - 'A' + 10;
        else
            inhex = NO;
        if (inhex == YES)
            n = 16 * n + hexdigit;
    }
    return n;
}

int main()
{
    printf("hex: 0x11 -> digit: %d\n", htoi1("0x11"));
    printf("hex: 0x0 -> digit: %d\n", htoi1("0x0"));

    return 0;
}
