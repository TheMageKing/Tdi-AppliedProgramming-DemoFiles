#include "HuhAHeaderFile.h"

bool isCool(std::string name){
    if(name.find("Calum")!=-1){
        return true;
    }
    if(name.find("Isaac M.")!= -1){
        return false;
    }
    return true;
}

std::string whosAwesome(){
    if(isCool("Isaac M. and Calum")){
        tdi::print("they cool!");
    }
    return "YOU!";

}

int main(){
    bool pie = false;
    pie = isCool(whosAwesome());
    if(pie){
        //if the condition is true, do this
    }
}