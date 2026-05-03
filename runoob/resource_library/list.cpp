#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    numbers.push_back(19);
    numbers.push_back(20);
    numbers.push_back(30);
    
    std::cout << "First Element: " << numbers.front() << std::endl;

    std::cout << "Last Element: " << numbers.back() << std::endl;

    std::cout << "List elements: ";
    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    numbers.pop_back();

    std::cout << "List elements: ";
    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
