#include "Player.h"

bool Player::IsHitting()const{
	std::cout<<"One more card?(y/n)"<<std::endl;
	std::string answer;
	std::getline(std::cin,answer);
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
	std::cout<<"Player "<<m_name<<" wins!"<<std::endl;

}
void Player::Lose()const{
	std::cout<<"Player "<<m_name<<" loses!"<<std::endl;
}
void Player::Push()const{
	std::cout<<"Draw for "<<m_name<<"!"<<std::endl;
}
