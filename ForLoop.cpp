#include "HuhAHeaderFile.h"
#include <vector>

int main(){

    int cords[2][2] {{1,1},{1,1}};
    {
        int x = 0;//precondition
        while(x < 10){ //while condition)
            tdi::print("hi");//code contents
            x++;//post-code
        }
    }
    
    for(int x=0; x < 10; x++){
        tdi::print("hi");
    }

    std::vector<std::vector<int>> pie; //pie[0]

    std::vector<int> pie2 = pie[0];
    int p = pie[0][0];
    p++;

    /*
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    */    
}
    
