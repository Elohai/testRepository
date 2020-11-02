#include <string>

class Fruit{
protected:
	std:string name;
	std::string color;
public:
	Fruit(){};
	void SetName(std::string name);
	void SetColor(std::string color);
	std::string GetName();
	std::string GetColor();
}
