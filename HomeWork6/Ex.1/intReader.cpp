#include <iostream>

int main(){
	std::cout<<"Введите число:";
	std::string input;
	std::cin>>input;
	for(int i=0;i<input.length();i++){
		if(!isdigit(input[i])){
			std::cerr<<"Error!"<<std::endl;
			return 1;
		}
	}
	std::cout<<("Ok!")<<std::endl;
	return 0;
}

