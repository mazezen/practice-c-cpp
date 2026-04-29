//
//  vector.cpp
//  runoob
//
//  Created by mazezen on 2026/4/29.
//

#include <iostream>
#include <vector>

int main()
{
    // 创建一个 空的整数向量
    std::vector<int> myVector;

    // 添加元素到向量中
    for (int i = 1; i <= 5; ++i) {
        myVector.push_back(i*4);
    }

    std::cout << "向量中的元素: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std:: endl;

    // 访问向量中的第一个元素
    std::cout << "第一个元素: " << myVector[0] << std::endl;

    // 访问向量中的第二个元素
    std::cout << "第二个元素: " << myVector[1] << std::endl;

    // 获取向量中的元素大小
    std::cout << "向量元素大小: " << myVector.size() << std::endl;

    // 删除向量中的第三个元素
    myVector.erase(myVector.begin() + 2);

    // 重新查看向量元素
    std::cout << "删除后的向量元素: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    myVector.clear();
    std::cout << "向量元素大小: " << myVector.size() << std::endl;

    return 0;
}
