/**
 * 编写一个函数 escape(s, t)，将字符串 t 复制到字符串 s 中，并在复制
 * 过程中将换行符、制表符等不可见字符分别转换为\n、\t 等相应的可见的转义字符序列。要
 * 求使用 swich 语句。再编写一个具有相反功能的函数，在复制过程中将转义字符序列转换为
 * 实际字符。
 */

/* escape: expand newline and tab into visible sequences */
/* while copying the string t to s */

void escape(char s[], char t[])
{
    int i, j;
    for (i = j = 0; t[i] != '\0'; i++)
    {
        switch (t[i])
        {
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        default:
            s[j++] = t[i];
            break;
        }
        s[j] = '\0';
    }
}
