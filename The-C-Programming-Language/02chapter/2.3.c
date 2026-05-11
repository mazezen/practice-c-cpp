#include <stdio.h>
#include <string.h>

int strlen_self(char s[]);

int main()
{
    printf("%d\n", strlen_self("hello world"));
    printf("%lu\n", strlen("hello world!"));

    return 0;
}

int strlen_self(char s[])
{
    int i;
    while (s[i] != '\0')
        ++i;
    return i;
}
