#include "Hand.h"
class GenericPlayer:public Hand{
private:
	std::string name;
public:
	virtual void IsHitting()=0;
	bool IsBoosted();
	void Bust();
};
