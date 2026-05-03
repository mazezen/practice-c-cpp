#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(5) << 42 << std::endl;

    std::cout << std::setfill('*') << std::setw(5) << 42 << std::endl;

    std::cout << std::left << std::setw(5) << 42 << std::endl;

    std::cout << std::right << std::setw(5) << 42 << std::endl;

    std::cout << std::internal << std::setw(5) << -42 << std::endl;

    std::cout << std::setprecision(3) << 3.1415926 << std::endl;

    std::cout << std::fixed << std::setprecision(3) << 3.1415926 << std::endl;

    std::cout << std::scientific << 3.1415926 << std::endl;

    std::cout << std::hex << 42 << std::endl;

    std::cout << std::oct << 42 << std::endl;

    std::cout << std::dec << 42 << std::endl;

    std::cout << std::showbase << std::hex << 42 << std::endl;

    std::cout << std::noshowbase << std::hex << 42 << std::endl;

    std::cout << std::showbase << std::uppercase << std::hex<< 42 << std::endl;

    std::cout << std::showpos << 42 << std::endl;

    std::cout << std::noshowpos << 42 <<  std::endl;

    std::cout << std::boolalpha << true;
    std::cout << std::noboolalpha << true;

    std::cout << std::setbase(16) << 42;    

    std::cout << std::resetiosflags(std::ios::showbase) << std::hex << 42;

    std::cout << std::setiosflags(std::ios::showbase) << std::hex << 42;

    return 0;
}
