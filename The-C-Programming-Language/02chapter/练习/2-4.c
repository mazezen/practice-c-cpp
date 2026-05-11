// squeeze(s1, s2), 将字符串 s1 中任何与字符串 s2 中字符匹配的字符都删除

#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
            s[j++] = s[i];
    }

    s[j] = '\0';
}

int main()
{
    char s[20] = "hello world";
    squeeze(s, 'l');
    printf("%s\n", s);
}
