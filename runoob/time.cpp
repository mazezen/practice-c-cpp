//
//  time.cpp
//  runoob
//
//  Created by mazezen on 2026/4/29.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{   
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    cout << "1970-01-01 00:00:00 UTC 到现在的秒数: " << now << endl;

    // 把 now 转换为字符串形式
    char* dt = ctime(&now);
    cout << "本地日期和时间: " << dt << endl;

    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间: " << dt << endl;

    tm *ltm = localtime(&now);
    cout << "年: " << 1900 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时间: " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;

    return 0;
}
