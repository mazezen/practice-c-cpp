#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    // std::string name;
    // std::cout << "Enter your name: ";
    // std::cin >> name;

    // std::cout << "Enter your age: ";
    // int age;
    // std::cin >> age;

    // std::cout 
    //     << "Your name is: " 
    //     << name 
    //     << " and your age is: " 
    //     << age 
    //     << std::endl;

    // std::cerr << "An error occurred!" << std::endl;

    std::clog << "The is a log message." << std::endl;

    double pi = 3.14159;
    std::cout << std::setprecision(3) << pi << std::endl;

    std::cout << std::setw(10) << std::left << pi << std::endl;
    std::cout << std::setw(10) << std::right << pi << std::endl;

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if ( std::cin.fail() ) {
        std::cerr << "Invalid input!" << std::endl;
    } else {
        std::cout << "You entered: " << num << std::endl;
    }

    std::string fullname;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullname);
    std::cout << "Hello, " << fullname << "!" << std::endl;


    return 0;
}
