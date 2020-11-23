#include "GenericPlayer.h"

bool GenericPlayer::IsBusted(){    
    return GetTotal()>21;
}

void GenericPlayer::Bust(){
	std::cout<<m_name<<" is boosted!"<<std::endl;
}

std::ostream& operator<<(std::ostream &out,const GenericPlayer &player){
    out <<player.m_name;
    return out;
}
