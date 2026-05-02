#include <iostream>

using namespace std;

int main()
{
    cout << "请输入一个整数判断是奇数还是偶数: ";
    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << "odd";
    } else {
        cout << "even";
    }
    cout << endl;

    return 0;
}
