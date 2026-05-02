#include <iostream>
#include <map>

using namespace std;

float add(float num1, float num2) {return num1 + num2;}
float subtract(float num1, float num2) {return num1 - num2;}
float multiply(float num1, float num2) {return num1 * num2;}
float divide(float num1, float num2) {return num1 / num2;}

int main() 
{
    map<char, float (*)(float, float)> fun;
    fun['+'] = add;
    fun['-'] = subtract;
    fun['*'] = multiply;
    fun['/'] = divide;

    char op;
    float num1, num2;
    cout << "输入运算符: + 、-、*、/ : ";
    cin >> op;

    cout << "输入两个数: ";
    cin >> num1 >> num2;

    try {
        if (fun.count(op) > 0)
            cout << "结果: " << fun[op](num1, num2) << endl; 
        else 
             cout << "错误！请输入正确的运算符。" << endl;
    } catch (const std::exception& e) {
        cout << "错误！除数不能为零。" << endl;
    }

    return 0;
}
