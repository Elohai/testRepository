#ifndef H_FRACTION
#define H_FRACTION
#include <string>
#include <iostream>
class Fraction{
protected:
	int numerator;
	int denominator;
public:
	Fraction():numerator(1),denominator(1){};
	Fraction(int c_num,int c_denom):numerator(c_num),denominator(c_denom==0?1:c_denom){};
	Fraction operator+(const Fraction fr2);
	Fraction operator-(const Fraction fr2);
	friend Fraction operator*(const Fraction fr1,const Fraction fr2);
	friend Fraction operator/(const Fraction fr1,const Fraction fr2);
	int GetNumerator() const;
	int GetDenominator() const;
	std::string PrintFraction(bool printEndline=true) const;	
};
#endif