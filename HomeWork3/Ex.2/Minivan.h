#include "PassangerCar.h"
#include "Bus.h"
class Minivan:public PassangerCar,public Bus{
	public:
		Minivan():Bus("Volkswagen","Touran"){
			std::cout << "Minivan created!"<<std::endl;
		};
		Minivan(std::string c_comp,std::string c_mod):Bus(c_comp,c_mod){
			std::cout << "Minivan created!"<<std::endl;
		};
		~Minivan(){
			std::cout << "Minivan destroyed!"<<std::endl;
		};	
};