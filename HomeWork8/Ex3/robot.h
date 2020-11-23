#include <sstream>
#include <iostream>
#include "exceptions.h"
class Robot{
private :
	Point position;
public:
	Robot():position(0,0){};
	void Move(char direction);
};
