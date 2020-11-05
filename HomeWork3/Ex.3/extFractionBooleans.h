#include "Fraction.h"
//Перегрузка через функцию вне класса
bool operator==(Fraction fr1,Fraction fr2){
	float numeratorDividing = fr1.GetNumerator()/fr2.GetNumerator();
	float denominatorDividing = fr1.GetDenominator()/fr2.GetDenominator();
	return numeratorDividing == denominatorDividing;
}
//Перегрузка через функцию вне класса
bool operator!=(Fraction fr1,Fraction fr2){
	return !(fr1==fr2);
}
//Перегрузка через функцию вне класса
bool operator>(Fraction fr1,Fraction fr2){
	return fr1.GetNumerator()*fr2.GetDenominator()>fr1.GetDenominator()*fr2.GetNumerator();	
}
//Перегрузка через функцию вне класса
bool operator<(Fraction fr1,Fraction fr2){
	return !(fr1>fr2||fr1==fr2);	
}
//Перегрузка через функцию вне класса
bool operator>=(Fraction fr1,Fraction fr2){
	return !(fr1<fr2);	
}
//Перегрузка через функцию вне класса
bool operator<=(Fraction fr1,Fraction fr2){
	return !(fr1>fr2);	
}