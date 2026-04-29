#include <iostream>
#include "mylib.h"


int main()
{
    int c = 0;

    int a = 5;
    int b = 10;

    c = Add(a, b);
    Print("The result of addition is:");
    std::cout << c << std::endl;

    return 0;
}