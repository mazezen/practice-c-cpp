//
//  math.cpp
//  runoob
//
//  Created by mazezen on 2026/4/29.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    double x = 9.0;

    // 计算余弦
    double cos_x = cos(x);
    cout << cos_x << endl;

    // 计算正弦
    double sin_x = sin(x);
    cout << sin_x << endl;

    // 计算正切
    double tan_x = tan(x);
    cout << tan_x << endl;

    // 自然对
    double log_x = log(x);
    cout << log_x << endl;

    // 计算幂
    double pow_x = pow(x, 2);
    cout << pow_x << endl;

    // 计算平方跟
    double sqrt_x = sqrt(x);
    cout << sqrt_x << endl;

    // 计算绝对值
    double abs_x = abs(x);
    cout << abs_x << endl;

    // 生成随机数
    int i, j;
    srand((unsigned)time(0));
    for ( i = 0; i < 5; i++)
    {
        j = rand();
        cout << "随机数: " << j << endl;
    }


    return 0;
}
