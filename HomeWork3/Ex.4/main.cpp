#include "Card.h"

int main()
{
	Card AceOfSpades = Card(Card::CARD_A,Card::SPADES);
	AceOfSpades.GetCardInfo();
	std::cout<<std::endl;
	AceOfSpades.Flip();
	AceOfSpades.GetCardInfo();
	std::cout<<std::endl;
	Card QueenOfDiamonds = Card(Card::CARD_Q,Card::DIAMONDS);
	QueenOfDiamonds.GetCardInfo();
	std::cout<<std::endl;
	QueenOfDiamonds.Flip();
	std::cout<<std::endl;
	QueenOfDiamonds.GetCardInfo();
	/*Результат выполнения программы
	
	Suit is Spades
	Value is Ace
	Face is down
	It gives 1 points

	Suit is Spades
	Value is Ace
	Face is up
	It gives 1 points

	Suit is Diamonds
	Value is Queen
	Face is down
	It gives 10 points


	Suit is Diamonds
	Value is Queen
	Face is up
	It gives 10 points
	
	*/
	
}