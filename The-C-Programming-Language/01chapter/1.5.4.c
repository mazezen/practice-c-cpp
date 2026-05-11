// 统计行数、单词数与字符数
// 对单词的定义比较宽， 它是任何其中不包含空格、制表符活换行符的字符序列

#include <stdio.h>

#define IN 1  /* 在单词内 */
#define OUT 0 /* 在单词外 */

int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("行数: %d 单词数: %d 字符数: %d\n", nl, nw, nc);

    return 0;
}
