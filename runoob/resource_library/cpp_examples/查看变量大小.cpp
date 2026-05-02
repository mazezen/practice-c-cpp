#include <iostream>
#include <climits>

using namespace std;

int main()
{

    // Darwin arm64
    cout << "int size: "  << sizeof(int) << '\n'; // 4
    cout << "float size: " << sizeof(float) << '\n'; // 4
    cout << "double size: " << sizeof(double) << '\n'; // 8
    cout << "long double size: " << sizeof(long double) << '\n'; // 8
    cout << "string size: " << sizeof(string) << '\n';  // 24

    return 0;
}
