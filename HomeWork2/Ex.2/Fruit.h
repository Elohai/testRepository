#ifndef H_FRUIT
#define H_FRUIT
#include <string>

class Fruit{
protected:
	std::string name;
	std::string color;
public:
	Fruit(){};
	Fruit(std::string c_name,std::string c_color):color(c_color),name(c_name){};
	std::string GetName();
	std::string GetColor();
};
#endif