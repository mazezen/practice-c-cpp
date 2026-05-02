#include <iostream>
#include <fstream>

int main()
{
    std::fstream file;
    // file.open("example.txt", std::ios::out);
    // if (!file) {
    //     std::cerr << "Unable to open file!" << std::endl;
    //     return 1; 
    // } 
    // file << "Hello, world!" << std::endl;
    // file.close();


    // file.open("example.txt", std::ios::in);
    // if (file) {
    //     std::string line;
    //     while (getline(file, line)) {
    //         std::cout << line << std::endl;
    //     }

    //     std::cout << line << std::endl;
    // }

    // file.close();

    file.open("example.txt", std::ios::app);
    if (file) {
        file << "Appending this line to the file." << std::endl;
    }
    file.close();
    


    return 0;
}
