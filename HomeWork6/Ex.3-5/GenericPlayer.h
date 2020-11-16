#ifndef H_GENERICPLAYER
#define H_GENERICPLAYER
#include "Hand.h"
class GenericPlayer:public Hand{
protected:
	std::string m_name;
public:
	GenericPlayer(std::string name):m_name(name){};
	virtual bool IsHitting()const =0;
	bool IsBoosted();
	void Bust();
};
#endif
