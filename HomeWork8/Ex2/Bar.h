#include "Ex.h"
class Bar{
private:
	float y;
public:
	Bar():y(0){};
	void set(float a){
		if ((a+y)>100){
			throw Ex(a+y);
		}
		else
			y=a;
	}
};
