#include "Parallelogramm.h"

class Rhombus:public Parallelogramm{
	public:
		Rhombus():Parallelogramm(){};
		Rhombus(float side, float height):Parallelogramm(height,side){};
		float area() const;
};
