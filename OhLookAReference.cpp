#include <iostream>

int main(){
    std::cout<< "Hello world!";
    int one = 1;
    int& oneRef = one;  
    std::cout << one << "\n";
    std::cout << oneRef << "\n";    
    oneRef++;
    std::cout << one;
}