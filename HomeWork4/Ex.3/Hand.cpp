#include "Hand.h"


void Hand::Add(Card* newCard){
		hand.push_back(newCard);
}
void Hand::Clear(){
		hand.clear();
}	

bool ComparePointers(Card* a,Card* b){
	return *a<*b;
}

int Hand::GetValue(){
	int result=0;
	int acesCount = 0;
	Print();
	std::sort(hand.begin(),hand.end(),ComparePointers);
	std::vector<Card*>::iterator cardIterator;
	Print();
	for(cardIterator = hand.begin();cardIterator!=hand.end();cardIterator++){
		result+= (*cardIterator)->GetValue();
		if ((*cardIterator)->GetCardValueName() == "Ace"){
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

void Hand::Print(){
	for_each(hand.begin(),hand.end(),std::mem_fun(&Card::GetCardInfo));

}
