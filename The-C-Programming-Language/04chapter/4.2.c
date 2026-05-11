#include <ctype.h>
#include <stdio.h>

#define MAXLINE 100

/* atof: conver string s to double */
double atof(char s[])
{
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++) /* skip witespace */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    return sign * val / power;
}

/* rudimentary calculator */
int main()
{
    double sum, atof(char[]);
    char line[MAXLINE];
    int getline(char[] line, int max);

    sum = 0;
    while (getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));

    return 0;
}
