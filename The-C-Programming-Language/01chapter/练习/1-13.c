// 编写一个程序, 打印输入中单词长度的直方图. 水平方向的直方图比较容易绘制,
// 垂直方向的直方图则要困难些.

#include <stdio.h>

#define MAXHIST 15 /* 直方图最大高度 */
#define MAXWORD 11 /* 能统计的最大单词长度 */
#define IN 1       /* inside a word */
#define OUT 0      /* outsite a word */

/* print horizontal historgram */
int main()
{
    int c, i, nc, state;
    int len;
    int maxvalue;    /* 出现次数最多的单词数量 */
    int ovflow = 0;  /* 超过 MAXWORD 长度的单词数量 */
    int wl[MAXWORD]; /* wl[i] = 长度为 i 的单词数量 */

    state = OUT;
    nc = 0;
    for (i = 0; i < MAXWORD; ++i)
        wl[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if (nc > 0)
            {
                if (nc < MAXWORD)
                {
                    ++wl[nc];
                }
                else
                {
                    ++ovflow;
                }
            }
            nc = 0;
        }
        else if (state == OUT)
        {
            state = IN;
            nc = 1;
        }
        else
        {
            ++nc;
        }
    }

    maxvalue = 0;
    for (i = 1; i < MAXWORD; ++i)
        if (wl[i] > maxvalue)
            maxvalue = wl[i];

    for (i = 1; i < MAXWORD; ++i)
    {
        printf("%5d - %5d : ", i, wl[i]);
        if (wl[i] > 0)
        {
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
                len = 1;
        }
        else
        {
            len = 0;
        }

        while (len > 0)
        {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if (ovflow > 0)
        printf("There are %d words >= %d\n", ovflow, MAXWORD);

    return 0;
}
