#include "divbz.h"
#include <iostream>
int main(){
    try{
        int divident=1;
        int divisor=0;
        int i =my_division(divident,divisor);
    }
    catch(const char* ex){
        std::cout<<ex<<std::endl;
    }
    
}
