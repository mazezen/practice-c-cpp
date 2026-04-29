//
//  string.cpp
//  runoob
//
//  Created by mazezen on 2026/4/29.
//
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char site[7] = {'r', 'u', 'n', 'o', 'o', 'b', '\0'};
    cout << "The string is: " << site << endl;

    char site_copy[7];
    
    // 复制字符串
    strcpy(site_copy, site);
    cout << "The copied string is: " << site_copy << endl;

    // 拼接字符串
    cout << "After concatenation: " << strcat(site, " is great!") << endl;

    string str1 = "Hello, ";
    string str2 = "world!";
    string str3 = str1 + str2; // 字符串连接
    cout << "Concatenated string: " << str3 << endl;

    strcmp(str1.c_str(), str2.c_str()) == 0 ? cout << "str1 and str2 are equal." << endl : cout << "str1 and str2 are not equal." << endl;

    cout << "length of str1: " << strlen(str1.c_str()) << endl;
    cout << "length of str1: " << str1.length() << endl;
    

 
    return 0;
}
