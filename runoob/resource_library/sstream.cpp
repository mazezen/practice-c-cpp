#include <iostream>
#include <sstream>

int main()
{
    // std::string data = "10 20.5";
    // std::istringstream iss(data);

    // int i;
    // double d;

    // iss >> i >> d;

    // std::cout << "Integer: " << i << std::endl;
    // std::cout << "Double: " << d << std::endl;

    // std::ostringstream oss;
    // int i = 10;
    // double d = 200.5;

    // oss << i << " " << d;
    
    // std::string result = oss.str();
    // std::cout << "Resulting string: " << result << std::endl;

    // return 0;

    std::string data = "30 50.6";
    std::stringstream ss(data);

    int i;
    double d;

    ss >> i >> d;
    std::cout << "Read Integer: " << i << ", Double: " << d << std::endl;

    ss.str("");
    ss << "New data: " << 50 << " " << 60.7;

    std::string newData = ss.str();
    std::cout << "New data string: " << newData << std::endl;

    return 0;
}
