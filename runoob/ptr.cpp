//
//  ptr.cpp
//  runoob
//
//  Created by mazezen on 2026/4/29.
//

#include <iostream>

using namespace std;

const int MAX = 3;

void editValue(int *a);
double calAdverage(int *arr, int size);


int main()
{
    // int var1;
    // char var2[10];

    // cout << "Address of var1: " << &var1 << endl;
    // cout << "Address of var2: " << &var2 << endl;

    int var = 20;
    int *ip;

    ip = &var;
    cout << "Value of var variable: " << var << endl;
    cout << "Address is: " << &var << endl;
    cout << "Address is: " << ip << endl;
    cout << "Value at address is: " << *ip << endl; 

    // 空指针
    // int *ptr = nullptr;
    int *a = NULL;
    cout << "The value of ptr is: " << a << endl;
    
    // 指针运算
    int arr[5] = {10, 20, 30, 40, 50};
    int *arr1 = arr; // 定义一个指针arr1指向数组的第一元素
    cout << "First element: " << *arr1 << endl; // 输出一个元素
    arr1++; // 指针向后移动一个元素
    cout << "Second element: " << *arr1 << endl; // 输出移动后指向的元素
    arr1 += 2; // 指针向后移动两个元素
    cout << "Fourth element: " << *arr1 << endl; // 输出移动后

    arr1--; // 指针向前移动一个元素
    cout << "Third element: " << *arr1 << endl; 

    arr1 -= 2;
    cout << "First element again: " << *arr1 << endl;

    int a1 = 10;
    int b1 = 20;
    int *p1 = &a1;
    int *p2 = &a1;
    int *p3 = &b1;

    if (p1 == p2) 
    {
        cout << "p1 and p2 point to the same address." << endl;
    } 
    else {
        cout << "p1 and p2 point to different address" << endl;
    }

    if (p1 == p3)
    {
        cout << "p1 and p3 point to the same address." << endl;
    }
    else 
    {
        cout << "p1 and p3 point to different address" << endl;
    }

    int* ar1 = &arr[0];
    int* ar2 = &arr[1];
    if (ar1 < ar2)
    {
        cout << "ar1 指向的元素在 ar2 指向的元素之前" << endl;
    } 
    else 
    {
        cout << "ar1 指向的元素在 ar2 指向的元素之后" << endl;
    }

    // 指针数组
    int var1[MAX] = {10, 100, 200};

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of var1[" << i << "] = " << var1[i] << endl;
    }

    int *var2[MAX];
    for (int j = 0; j < MAX; j++)
    {
        var2[j] = &var1[j];
    }

    for (int i = 0; i < MAX; i++)
    {
        cout << "pointer address is: " << var2[i] << " and value is: " << *var2[i] << endl;
    }

    const char *names[4] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };
 
   for (int i = 0; i < 4; i++)
   {
      cout << "Value of names[" << i << "] = ";
      cout << names[i] << endl;
   }

   // 指向指针的指正
   int p5 = 10;
   int *p6;
   int **p7;

   p6 = &p5; // p6 是一个指针，指向 p5
   p7 = &p6; // p7 是一个指针，指向 p6

   cout << "Value of p5: " << p5 << endl;
   cout << "Value of p5: " << *p6 << endl;
   cout << "Value of p5: " << **p7 << endl;

   // 指针传递给函数
   int c1 = 10;
   cout << "Before editValue, c1 = " << c1 << endl;
   editValue(&c1); // 传递 c1 的地址
   cout << "After editValue, c1 = " << c1 << endl;

    double avg = calAdverage(arr, 5);
    cout << "Average of the array is: " << avg << endl;


    // 函数返回指针


    return 0;
}

// 通过传递指针作为参数, 修改其值.影响到调用函数的变量
void editValue(int *a)
{
    *a = 100; // 修改指针指向的值
}

double calAdverage(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}
