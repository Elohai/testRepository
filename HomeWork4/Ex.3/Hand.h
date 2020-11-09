#include <algorithm>
#include "Card.h"
#include <vector>

class Hand{
protected:
	std::vector<Card*> hand;
public:
	Hand(){};
	void Add(Card* newCard);
	void Clear();
	int GetValue();

};
