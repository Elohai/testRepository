#include <iostream>
#include "Bar.h"
int main(){
	try{
		int input;
		Bar bar= Bar();
		do{
			std::cout<<"Введите число:";
			std::cin>>input;
			bar.set((float)input);
		}while(input!=0);
	}
	catch(Ex exeption){
		std::cout<<"Ошибка! Сумма двух последних чисел "<<exeption.GetData()<<std::endl;
	}
}
