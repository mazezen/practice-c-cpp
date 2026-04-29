//
//  ref.cpp
//  runoob
//
//  Created by mazezen on 2026/4/29.
//

#include <iostream>

using namespace std;

void swap(int &x, int &y);

int main()
{   

    // 声明两个变量 a and b
    int a;
    double b;

    // 声明 a and b 的引用
    int &ra = a;
    double &rb = b;

    a = 10;
    b = 3.14;

    cout << "Value of a: " << a << endl;
    cout << "Reference to a (ra): " << ra << endl;
    cout << "Value of b: " << b << endl;
    cout << "Reference to b (rb): " << rb << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of ra: " << &ra << endl;
    if (&a == &ra) {
        cout << "a and ra refer to the same memory location." << endl;
    }

    a = 20; // 修改 a 的值
    b = 6.28; // 修改 b 的值
    cout << "Value of a: " << a << endl;
    cout << "Reference to a (ra): " << ra << endl;
    cout << "Value of b: " << b << endl;
    cout << "Reference to b (rb): " << rb << endl;


    // 通过引用传参实现两个值交换
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}


void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}