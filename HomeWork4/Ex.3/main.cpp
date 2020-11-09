
#include "Hand.h"

int main()
{
	Card AceOfSpades = Card(Card::CARD_A,Card::SPADES);
	Card QueenOfDiamonds = Card(Card::CARD_Q,Card::DIAMONDS);
	Card EightOfClubs = Card(Card::CARD_8,Card::CLUBS);
	Hand hand = Hand();
	hand.Add(&AceOfSpades);
	hand.Add(&QueenOfDiamonds);
	hand.Clear();
	hand.Add(&AceOfSpades);
	hand.Add(&QueenOfDiamonds);
	std::cout<<hand.GetValue()<<std::endl;
	hand.Add(&EightOfClubs);
	std::cout<<hand.GetValue()<<std::endl;
	
}
