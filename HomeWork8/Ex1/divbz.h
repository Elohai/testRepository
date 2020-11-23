#include <iostream>
template<typename T>
T my_division(T divident, T divisor){    
    if (divisor==0){        
        throw "Division by zero!";
    }
    T result = divident/divisor;
    return result;
}
