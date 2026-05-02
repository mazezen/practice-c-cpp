#include <iostream>

using namespace std;

int main()
{
    cout << "请输入年份: ";
    int number;
    cin >> number;

    if ((number % 4 == 0) && (number % 100 == 0) && (number % 400 == 0)) {
        cout << "闰年" << endl;
    } else {
        cout << "不是闰年" << endl;
    }

    return 0;
}
