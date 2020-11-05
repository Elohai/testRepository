#include "Parallelogramm.h"

class Square:public Parallelogramm{
	public:
		Square():Parallelogramm(){};
		Square(float side):Parallelogramm(side,side){};
		float area() const;	
};
