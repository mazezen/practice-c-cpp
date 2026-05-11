// 编写一个程序, 打印长度大于 80 个字符的所有输入行

#include <stdio.h>

#define MAXLINE 1000
#define LONGLINE 80

int getline2(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline2(line, MAXLINE)) > 0)
    {
        if (len > LONGLINE)
            printf("%s ", line);
    }

    return 0;
}

int getline2(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
