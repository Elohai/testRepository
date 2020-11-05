#ifndef H_BUS
#define H_BUS
#include "Car.h"
class Bus:public Car{
	public:
		Bus():Car("Ikarus","620"){
			std::cout << "Bus created!"<<std::endl;
		};
		Bus(std::string c_comp,std::string c_mod):Car(c_comp,c_mod){
			std::cout << "Bus created!"<<std::endl;
		};	
		~Bus(){
			std::cout << "Bus destroyed!"<<std::endl;
		};
};
#endif