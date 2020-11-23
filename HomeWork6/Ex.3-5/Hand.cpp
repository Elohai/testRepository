#include "Hand.h"


void Hand::Add(Card* newCard){
		hand.push_back(newCard);
}
void Hand::Clear(){
		hand.clear();
}	
int Hand::GetValue()const{
	int result=0;
	int acesCount = 0;
	std::vector<Card*>::iterator cardIterator;
	for (int i=0;i<hand.size();i++){
		result+= hand[i]->GetValue();
		if(hand[i]->GetValue() ==11){
			acesCount++;
		}
	}
	if (result>21){
		result-=acesCount*10;
	}
	return result;
}
