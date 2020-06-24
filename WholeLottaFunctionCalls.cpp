#include "HuhAHeaderFile.h"

int functionA();//Just declared
void functionB(float d);//Declared with a parameter/argument (equivalent!)

float functionC(){//Declared AND defined
    tdi::print("Function C has run!");
    return 6.022E23;
}

int main(){
    std::cout<<"Your computer starts here  ";
    tdi::print("Begin the mess!");//tdi::print is just our way of doing the line above
    functionA();
    tdi::print("FREEDOM!");
}


void printYouFools(){//not declared above!
    std::cout << "You FOOLS!\n";
}

int functionA(){//Declared above: defined here
    functionB(1.2);
    std::cout <<"Function A has RUN, ";
    printYouFools();
    return -10;//we said we'd return an int, so we have to return an int!
    
}

void functionB(float bop){
    functionC();
    tdi::print("Function B was passed: "+std::to_string(bop));
    //Is a void function, so returns nothing
}

