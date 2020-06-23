#include "HuhAHeaderFile.h"

int main(){
    int numA = 4;
    int numB = 10;

    int& numRefA = numA;
    int& numRefB = numB;
    int& numRefC = numA;
    int& numRefD = numB;
    tdi::print(numRefA);
    numRefA = 11;
    tdi::print(numRefC++);// the ++ operator increments a number by 1.
    //Putting it after the variable name means it gets incremented after the variable is used (post-increment)
    tdi::print(numA);
}