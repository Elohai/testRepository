#include "House.h"

bool House::IsHitting()const{
	return this->GetValue()<=16;
}
void House::FlipFirstCard(){
	hand[0]->Flip();
}
