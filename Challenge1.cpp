#include <iostream>
#include "HuhAHeaderFile.h"

double calculateDistance(int x1, int x2, int y1, int y2);
int someFunction(){
    int x1;
    int x2;
    int y1;
    int y2;
    double distance;
    tdi::print("x1: ");
    std::cin >> x1;
    tdi::print("x2: ");
    std::cin >> x2;
    tdi::print("y1: ");
    std::cin >> y1;
    tdi::print("y2: ");
    std::cin >> y2;

    return calculateDistance(x1, x2, y1, y2);
    }

{

}


int main(){
    std::cout << someFunction(1, 2.3);
    tdi::print("x");
}