#include "Hand.h"


void Hand::Add(Card* newCard){
		hand.push_back(newCard);
}
void Hand::Clear(){
	for(int i=0;i<hand.size();i++){    //Верно ли я понял комментарий к пердыдущему домашнему заданию? Удаление хранящихся в памяти Объектов класса Card через delete? 
                                       //Прав ли я, что данном случае некорректно использовать delete[] &hand, так как для hand память выделяется без оператора new?
        delete hand[i];                //Есть ли смысл писать hand[i] =nullptr, или процесс удаления и так подразумеват это?
        hand[i]=nullptr;
    }	
    hand.clear();
}	
int Hand::GetTotal()const{
	
    if(hand.empty()){
        return 0;
    }
    int result=0;
	int acesCount = 0;
	std::vector<Card*>::const_iterator cardIterator;
	for (cardIterator=hand.begin();cardIterator!=hand.end();cardIterator++){
		result+= (*cardIterator)->GetValue();
		if((*cardIterator)->GetValue() ==11){
			acesCount++;
		}
	}
	if (result>21){
		result-=acesCount*10;
	}
	return result;
}
