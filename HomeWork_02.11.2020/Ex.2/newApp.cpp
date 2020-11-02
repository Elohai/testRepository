#include <iostream>
#include "Fruit.h"
#include "Apple.h"
#include "Banana.h"
#include "GrannySmith.h"

int main()
{	
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.GetName() << " is " << a.GetColor() << ".\n";
    std::cout << "My " << b.GetName() << " is " << b.GetColor() << ".\n";
    std::cout << "My " << c.GetName() << " is " << c.GetColor() << ".\n";

    return 0;
}




