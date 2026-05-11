// 打印输入中最长的行（使用外部变量）

#include <stdio.h>

#define MAXLINE 1000

/* 外部变量声明 */
int max;               // 最长行的长度
char line[MAXLINE];    // 当前输入行
char longest[MAXLINE]; // 最长行内容

int getline4(void);
void copy(void);

int main()
{
    int len;

    max = 0;

    while ((len = getline4()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }

    if (max > 0)
        printf("%s", longest);

    return 0;
}

/* 读取一行到 line[]，返回长度 */
int getline4(void)
{
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

/* 把 line[] 复制到 longest[] */
void copy(void)
{
    int i = 0;

    while ((longest[i] = line[i]) != '\0') // 注意是赋值 = ，不是比较 ==
        ++i;
}
