#include <string>
#include <iostream>
//NOTE: It'd be a good idea to put a header guard here

namespace tdi{
    void print(const std::string& str){
        operator<<(std::cout, str) << std::endl;
    }
    void print(const int& num){
        print(std::to_string(num));
    }
}