#include <iostream>
#include <array>

int main() {
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};

    for (const auto& value : myArray) {
        std::cout << value;
    }
    std::cout << std::endl;

    std::cout << "Element at index 2: " << myArray.at(2) << std::endl;

    std::cout << "Array size: " << myArray.size() << std::endl;

    myArray[2] = 10;

    for (const auto& value : myArray) {
        std::cout << value;
    }
    std::cout << std::endl;

    return 0;
}
