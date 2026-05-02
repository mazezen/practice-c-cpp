#include <iostream>

using namespace std;

int max(int a, int b, int c)
{
    int max = 0;
    if (a > max) {
        max = a;
    }

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main()
{
    cout << "最大的数是: " << max(19, 8, 100) << endl;

    return 0;
}
