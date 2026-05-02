#include <iostream>

using namespace std;

int main()
{

    cout << "请输入一个自然数: ";
    int n, sum = 0;
    cin >> n;

    if (n <= 0) {
        sum = 0;
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    }

    cout << "sum : " << sum << endl;
    

    return 0;
}
