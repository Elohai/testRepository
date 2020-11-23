#ifndef H_CARD
#define H_CARD
#include <string>
#include <iostream> // Этот заголовочный файл я добавил в Card.h, чтобы и Card.cpp и main.cpp, которые включают его в себя, могли пользоваться методами iostream
class Card{	
	public:
		enum Suit{SPADES, CLUBS, DIAMONDS, HEARTS};
		enum Value{CARD_2,CARD_3,CARD_4,CARD_5,CARD_6,CARD_7,CARD_8,CARD_9,CARD_10,CARD_J,CARD_Q,CARD_K,CARD_A};
		Card()=delete;
		Card(Value c_value,Suit c_suit):value(c_value),suit(c_suit),faceUp(0){};
		void Flip();
		std::string GetCardValueName()const;
		std::string GetCardSuitName()const;
		int GetValue();
		void GetCardInfo();
		bool operator>(const Card card);
		bool operator<(const Card card);
		bool operator==(const Card card);
		bool operator!=(const Card card);
	protected:
		bool faceUp;
		Suit suit;
		Value value;
};
inline std::ostream& operator<<(std::ostream &out,const Card &card){
        out<<card.GetCardValueName()<<" of "<<card.GetCardSuitName()<<std::endl;
        return out;
};
#endif
