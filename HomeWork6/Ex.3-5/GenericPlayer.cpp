#include "GenericPlayer.h"

bool GenericPlayer::IsBoosted(){
	if (GetValue()>21){
		return true;
}
return false;
}

void GenericPlayer::Bust(){
	std::cout<<m_name<<" is boosted!"<<std::endl;
}
