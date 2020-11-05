#include "Fraction.h"

//Перегрузка через метод-член класса
Fraction Fraction::operator+(const Fraction fr2){
	return Fraction(numerator*fr2.denominator + fr2.numerator*denominator,denominator*fr2.denominator);	
};
//Перегрузка через метод-член класса
Fraction Fraction::operator-(const Fraction fr2){
	return Fraction(numerator*fr2.denominator - fr2.numerator*denominator,denominator*fr2.denominator);
};
//Перегрузка через дружественную функцию класса
Fraction operator*(const Fraction fr1,const Fraction fr2){
	return Fraction(fr1.numerator*fr2.numerator,fr1.denominator*fr2.denominator);	
};
//Перегрузка через дружественную функцию класса	
Fraction operator/(const Fraction fr1,const Fraction fr2){
	return Fraction(fr1.numerator*fr2.denominator,fr1.denominator*fr2.numerator);
};

std::string Fraction::PrintFraction(bool printEndline) const{
	std::string result =  std::to_string(numerator) +"/" +std::to_string(denominator);
	if(printEndline)
		result+="\r\n";
	return result;
}

//Сначала функция выглядела так, но я её немного переделал, чтоб проще было работать с выводом в main() в одну строку
/* void Fraction::PrintFraction(bool printEndline) const{
	std::cout<<numerator<<"/"<<denominator;
	if(printEndline)
		std::cout<<std::endl;
} */

int Fraction::GetDenominator() const{
	 return denominator;
}
int Fraction::GetNumerator() const{
	 return numerator;
}