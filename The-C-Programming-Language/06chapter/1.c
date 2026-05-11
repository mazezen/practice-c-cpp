#include <stdio.h>

struct point
{
    int x;
    int y;
}

/* makepoint: make a point from x and y components */
struct point
makepoint(int x, int y)
{
    struct point temp;

    temp.x = x;
    temp.y = y;

    return temp;
}

typedef int Length;
typedef char *String;

union u_tag
{
    int ival;
    float fval;
    char *sval;
} u;
