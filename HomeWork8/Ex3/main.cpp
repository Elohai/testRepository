#include "robot.h"
int main(){
	try{
		std::cout<<"Enter the direction sequence"<<std::endl;
		std::cout<<"(u for up,d for down,r for right, l for left):";
		std::string sequence;
		std::cin>>sequence;
		Robot robot = Robot();
		for(int i=0;i<sequence.size();i++){
			robot.Move(sequence[i]);
		}
	}
	catch(IllegalCommand ic){
		std::cout<<ic.getError();
	}
	catch(OffTheField otf){
		std::cout<<otf.getError();
	}
	catch(...){
		std::cout<<"Unknown error";
	}

}
