#include <stdio.h>

int main()
{

    /** 用户将用户的输入复制到输出程序 */
    int c;
    c = getchar();

    // EOF 文件结束指示符 EOF: end of file
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }

    return 0;
}
