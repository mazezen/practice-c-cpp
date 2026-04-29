//
//  main.cpp
//  cpp
//
//  Created by mazezen on 2026/4/28.
//

#include <iostream>
#include "header.h"

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 20;
    
    int c;
    c = Multiply(a, b);
    Log("the result c is: ");
    std::cout << c << std::endl;
    
    return 0;
}
