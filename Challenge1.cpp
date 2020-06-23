#include <iostream>
#include "HuhAHeaderFile.h"

int someFunction(){
    int x1;
    int x2;
    int y1;
    int y2;
    tdi::print("x1: ");
    std::cin >> x1;
    std::cin >> x2;
    std::cin >> y1;
    return x1;
    }

int main(){
    std::cout << someFunction();
    tdi::print("x");
}