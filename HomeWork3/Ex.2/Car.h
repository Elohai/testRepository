#ifndef H_CAR
#define H_CAR
#include <string>
#include <iostream>
class Car{
	protected:
		std::string company;
		std::string model;
	public:
		Car():company("Lada"),model("Granta"){
			std::cout << "Car created!"<<std::endl;
		};
		Car(std::string c_comp,std::string c_mod):company(c_comp),model(c_mod){
			std::cout << "Car created!"<<std::endl;
		};
		~Car(){
			std::cout << "Car destroyed!"<<std::endl;
		};
	
};
#endif