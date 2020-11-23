#include "GenericPlayer.h"
class House:public GenericPlayer{
public:
	House():GenericPlayer("House"){};
	virtual bool IsHitting() const;
	void FlipFirstCard();
    void PrintHand()const;
};
