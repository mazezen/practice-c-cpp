#include <iostream>

int main()
{
    std::cout << "请输入两个正整数: ";
    unsigned n, m = 0;
    std::cin >> n >> m;

    while (n != m) {
        if (n > m) {
            n -= m;
        } else {
            m -= n;
        }
    }

    std::cout << "HCF: " << n;

    return 0;
}
