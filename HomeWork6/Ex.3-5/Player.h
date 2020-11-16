#include "GenericPlayer.h"
class Player:virtual public GenericPlayer{
public:
	Player(std::string name):GenericPlayer(name){};
	virtual bool IsHitting() const;
	void Win() const;
	void Lose() const;
	void Push() const;
};
