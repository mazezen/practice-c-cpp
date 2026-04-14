#include <string.h>
#include <stdio.h>

int main()
{
    char a[] = "tutti frutti ice cream";
    printf("%s\n", a);

    char a_copy[] = "tutti "
                    "frutti"
                    " ice "
                    "cream";
    printf("%s\n", a_copy);

    char b[] = "\"Hello, world!\"";
    printf("%s\n", b);

    char c[] = "Today's special is a pastrami sandwich on raye bread with \
    a potato knish and a cherry soda.";
    printf("%s\n", c);

    char d[] = "Tormorrow's special is a corned beef sandwich on "
               "pumpernickel bread with a kasha knish and seltzer water.";
    printf("%s\n", d);

    printf("potato\nknish");

    printf("potato knish");
    printf("potato                knish");

    return 0;
}