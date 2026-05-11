/*
编写函数 any(s1, s2), 将字符串 s2 中的任意字符在字符串 s1 中第一次出现的位置作为结果返回.
如果 s1中不包含 s2中的字符, 则返回 -1.(标准库函数 strpbrk)具有同样的功能,但是它返回的是
指向该位置的指针.
*/
#include <stdio.h>

int any(char s[], int t)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == t)
            return i;
        else
            i++;
    }
    return -1;
}

int main()
{

    printf("%d\n", any("hello world", 'p'));

    return 0;
}
