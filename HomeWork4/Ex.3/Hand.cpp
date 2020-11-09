#include "Hand.h"


void Hand::Add(Card* newCard){
		hand.push_back(newCard);
}
void Hand::Clear(){
		hand.clear();
}	
int Hand::GetValue(){
	int result=0;
	int acesCount = 0;
	std::vector<Card*>::iterator cardIterator;
//	for(cardIterator = hand.begin();cardIterator!=hand.end();cardIterator++){
//		result+= cardIterator->GetValue();
//		if (cardIterator->GetCardValueName() == "Ace"){
//			acesCount++;
//		}
//	}
	for(int i=0;i<hand.size();i++){
		result+= hand[i]->GetValue();
		if(hand[i]->GetValue() ==11){
			acesCount++;
		}
	}
	if (result>21){
		result-=acesCount*10; //Вероятно, я не до конца разобрался с правилами, либо с задачей, но,
					// насколько я понял, если общее количество очков больше 21, то все тузы
					//дают по одному очку вместо 11.
	}
	return result;
}

