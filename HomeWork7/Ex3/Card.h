#ifndef H_CARD
#define H_CARD
#include <string>
#include "CardDef.h"
#include <iostream> // Этот заголовочный файл я добавил в Card.h, чтобы и Card.cpp и main.cpp, которые включают его в себя, могли пользоваться методами iostream
class Card{	
	public:
		Card()=delete;
		Card(CardValue c_value,CardSuit c_suit):value(c_value),suit(c_suit),faceUp(0){};
		void Flip();
		std::string GetCardValueName()const;
		std::string GetCardSuitName()const;
		int GetValue();
		void GetCardInfo();
        bool IsFlipped()const;
		bool operator>(const Card card);
		bool operator<(const Card card);
		bool operator==(const Card card);
		bool operator!=(const Card card);
	protected:
		bool faceUp;
		CardSuit suit;
		CardValue value;
};
inline std::ostream& operator<<(std::ostream &out,const Card &card){
        out<<card.GetCardValueName()<<" of "<<card.GetCardSuitName()<<std::endl;
        return out;
};
#endif
