#ifndef H_GENERICPLAYER
#define H_GENERICPLAYER
#include "Hand.h"
class GenericPlayer:public Hand{
protected:
	std::string m_name;
public:
    virtual void PrintHand()const=0;
	GenericPlayer(std::string name):m_name(name){};
	virtual bool IsHitting()const =0;
	bool IsBusted();
	void Bust();
    friend std::ostream& operator<<(std::ostream &out, const GenericPlayer &player);
};

#endif
