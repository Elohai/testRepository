#include "Circle.h"
#include "Rhombus.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>

int main()
{
	Circle circle=Circle(3);
	Rhombus rhombus = Rhombus(5,4);
	Square square = Square(5);
	Rectangle rectangle = Rectangle(7,2);
	std::cout<<"Circle area is "<<circle.area()<<std::endl;
	std::cout<<"Rhombus area is "<<rhombus.area()<<std::endl;
	std::cout<<"Square area is "<<square.area()<<std::endl;
	std::cout<<"Rectangle area is "<<rectangle.area()<<std::endl;
	
}