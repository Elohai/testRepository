#include "GenericPlayer.h"

bool GenericPlayer::IsBoosted(){
	if (GetValue()>21){
		return true;
}
return false;
}

void GenericPlayer::Bust(){
	std::cout<<name<<" is boosted!";
}
