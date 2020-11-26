#include "House.h"

bool House::IsHitting()const{
	return this->GetTotal()<=16;
}
void House::FlipFirstCard(){
	hand[0]->Flip();
}
void House::PrintHand()const{
    std::cout<<"House has:"<<std::endl;
    for(std::vector<Card*>::const_iterator iterator = hand.begin();iterator!=hand.end();iterator++){
        if((*iterator)->IsFlipped())
            std::cout<<**iterator;
    }
    std::cout<<std::endl<<std::endl;
}
