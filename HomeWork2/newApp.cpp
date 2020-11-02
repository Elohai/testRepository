#include <iostream>
#include "Person.h"
int main()
{
	Person boy = Person(12,45,"James",1);
	std::cout << boy.Greeting();
	Person anotherBoy = Person(1);
	anotherBoy.SetAge(11);
	anotherBoy.SetWeight(42);
	anotherBoy.SetName("Bill");
	std::cout << anotherBoy.Greeting();
	Person girl =Person(11,35,"Miranda",0);
	std::cout << girl.Greeting();
	Person anotherGirl=Person();
	anotherGirl.SetAge(10);
	anotherGirl.SetWeight(30);
	anotherGirl.SetName("Emma");
	std::cout << anotherGirl.Greeting();
}
