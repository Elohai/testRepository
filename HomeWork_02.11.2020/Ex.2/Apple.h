#ifndef H_APPLE
#define H_APPLE
#include "Fruit.h"

class Apple: public Fruit
{
public:
	Apple():Fruit("apple","green"){};
	Apple(std::string c_color):Fruit("apple",c_color){};
	Apple(std::string c_color, std::string c_name):Fruit(c_color,c_name){};
};
#endif