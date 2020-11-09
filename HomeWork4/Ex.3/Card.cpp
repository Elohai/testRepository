#include "Card.h"


void Card::Flip(){
	faceUp=!faceUp;
}
int Card::GetValue(){
	if(value<8){		//2-9
		return value+2;
	}
	else if(value==CARD_A){ //Ace
		return 11;
	}
	else return 10;		//10-K
}

std::string Card::GetCardValueName(){ //Более элегантного способа совершить сие я не нашел ( разве что создать map<Value,std::string> и map<Suit,std::string>)	
	switch(value){
		case(CARD_2):return "Two";
		case(CARD_3):return "Three";
		case(CARD_4):return "Four";
		case(CARD_5):return "Five";
		case(CARD_6):return "Six";
		case(CARD_7):return "Seven";
		case(CARD_8):return "Eight";
		case(CARD_9):return "Nine";
		case(CARD_10):return "Ten";
		case(CARD_J):return "Jack";
		case(CARD_Q):return "Queen";
		case(CARD_K):return "King";
		case(CARD_A):return "Ace";
		default:return "Unknown value!";		
	}
}

std::string Card::GetCardSuitName(){	
	switch(suit){
		case(SPADES):return "Spades";
		case(DIAMONDS):return "Diamonds";
		case(CLUBS):return "Clubs";
		case(HEARTS):return "Hearts";
		default:return "Unknown suit!";
	}
}

void Card::GetCardInfo(){
	std::cout<<"Suit is "<< GetCardSuitName()<<std::endl;
	std::cout<<"Value is "<< GetCardValueName()<<std::endl;
	std::cout<<"Face is "<<(faceUp?"up":"down") <<std::endl;
	std::cout<<"It gives "<< GetValue() <<" points"<<std::endl;
}

bool Card::operator>(const Card card){
	return value>card.value;
}

bool Card::operator<(const Card card){
	return value<card.value;
}
bool Card::operator==(const Card card){
	return value==card.value;
}
bool Card::operator!=(const Card card){
	return value!=card.value;
}
