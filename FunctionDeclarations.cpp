#include <iostream>
#include <vector>

float someFunction(float a);
void printVector(std::vector<float>);

int main(){
    float y;
    y = 5.1;
    y = someFunction(y);
    std::vector<float> x;
    x.push_back(y);
    x.push_back(someFunction(y));
    x.push_back(someFunction(y));
    printVector(x);
}

void printVector(std::vector<float> vectorToPrint){
    for(float p : vectorToPrint){
        std::cout << p << ", ";
    }    
    std::cout << std::endl;

}

float someFunction(float a){//we DECLARE float A here
    //float a is initalized when we call someFunction
    return std::rand() + a;


}