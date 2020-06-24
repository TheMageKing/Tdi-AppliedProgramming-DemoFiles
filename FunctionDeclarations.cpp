#include <iostream>
#include <vector>

float tdiFunction(float a);
float tdiFunction();
void printVector(std::vector<float>);

int main(){
    float y;
    y = 5.1;
    y = tdiFunction(6.022e23);
    tdiFunction();
    std::vector<float> x;
    x.push_back(y);
    x.push_back(tdiFunction(y));
    x.push_back(tdiFunction(y));
    printVector(x);
}

void printVector(std::vector<float> vectorToPrint){
    for(float p : vectorToPrint){
        std::cout << p << ", ";
    }    
    std::cout << std::endl;

}

float tdiFunction(float a){//we DECLARE float A here
    //a= whatever it was called with
    //float a is initalized when we call tdiFunction
    return std::rand() + a;


}