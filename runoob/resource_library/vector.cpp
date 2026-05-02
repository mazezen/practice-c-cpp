#include <algorithm>
#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec;
    int i;

    std::cout << "vector size = " << vec.size() << std::endl;

    for (int i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    std::cout << "vector size = " << vec.size() << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "value of [" << i << "] = " << vec[i] << std::endl;
    }

    std::vector<int>::iterator v = vec.begin();
    while (v != vec.end()) {
        std::cout << "value of v = " << *v << std::endl;
        v++;
    }

    std::vector<int> vec1 = {5, 3, 1, 4, 2};
    std::sort(vec1.begin(), vec1.end());
    for (int i : vec1) {
        std::cout << i << std::endl;
    }

    return 0;
}
