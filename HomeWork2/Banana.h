#include "Fruit.h"

class Banana: public Fruit
{
public:
	Banana():name("banana"),color("yellow");
	void SetName(std::string n_name);
	void SetColor(std::string n_color);
	std::string GetName();
	std::string GetColor();
}
