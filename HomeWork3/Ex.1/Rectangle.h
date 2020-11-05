#include "Parallelogramm.h"

class Rectangle:public Parallelogramm{
	public:
		Rectangle():Parallelogramm(){};
		Rectangle(float width,float height):Parallelogramm(height,width){};
		float area() const;	
};
