#include "Figure.h"
#include <math.h>
class Circle:public Figure{
	protected:
		float radius;
	public:
		Circle():radius(0){};
		Circle(float r):radius(r){};
		float area() const;	
};