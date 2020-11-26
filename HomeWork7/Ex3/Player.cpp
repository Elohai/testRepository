#include "Player.h"

bool Player::IsHitting()const{
	std::cout<<"One more card?(y/n)"<<std::endl;
	std::string answer;
	std::cin>>answer;
	if(answer=="y"){
		return true;
	}
	else if(answer=="n"){
		return false;
	}
	else{
		std::cout<<"Try again"<<std::endl;
		return IsHitting();
	}
}
void Player::Win()const{
	std::cout<<"Player "<<m_name<<" wins with "<<GetTotal()<<std::endl;

}
void Player::Lose()const{
	std::cout<<"Player "<<m_name<<" loses with "<<GetTotal()<<std::endl;
}
void Player::Push()const{
	std::cout<<"Draw for "<<m_name<<" with "<<GetTotal()<<std::endl;
}

void Player::PrintHand()const{
    std::cout<<m_name<<" has:"<<std::endl;
    for(std::vector<Card*>::const_iterator iterator = hand.begin();iterator!=hand.end();iterator++){
        std::cout<<**iterator;
    }
    std::cout<<"Score is "<<GetTotal()<<std::endl<<std::endl;
}
