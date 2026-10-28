#include <iostream>
#include <string>
class Asistente {
public:
    void printUserInfo() {
        std::cout << "User info updated." << std::endl;
    }
    void printUserName(const std::string& name) {
        std::cout << "User: " << name << std::endl;
    }
};