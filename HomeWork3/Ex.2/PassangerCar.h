#ifndef H_PASSANGERCAR
#define H_PASSANGERCAR
#include "Car.h"
class PassangerCar:public Car{
	public:
		PassangerCar():Car("Hundai","Solaris"){
			std::cout << "PassangerCar created!"<<std::endl;
		};
		PassangerCar(std::string c_comp,std::string c_mod):Car(c_comp,c_mod){
			std::cout << "PassangerCar created!"<<std::endl;
		};
		~PassangerCar(){
			std::cout << "PassangerCar destroyed!"<<std::endl;
		};
};
#endif