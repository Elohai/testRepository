#ifndef H_PARALLELOGRAMM
#define H_PARALLELOGRAMM
#include "Figure.h"


class Parallelogramm:public Figure{
	protected:
		float height;
		float base;
	public:
		Parallelogramm():base(0),height(0){};
		Parallelogramm(float h, float b):base(b),height(h){};
		float area() const;	
};
#endif