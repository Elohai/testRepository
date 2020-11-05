#include "Fraction.h"
#include "extFractionBooleans.h"
int main()
{
	Fraction fr1=Fraction(1,2);
	std::cout << fr1.PrintFraction();
	Fraction fr2=Fraction(1,4);
	std::cout << fr2.PrintFraction();
	
	Fraction fr3=fr1+fr2;
	std::cout << fr1.PrintFraction(false)+" + "+fr2.PrintFraction(false)+" = "+ fr3.PrintFraction();
	
	Fraction fr4=fr1-fr2;
	std::cout << fr1.PrintFraction(false)+" - "+fr2.PrintFraction(false)+" = "+ fr4.PrintFraction();
	
	Fraction fr5=fr1*fr2;
	std::cout << fr1.PrintFraction(false)+" * "+fr2.PrintFraction(false)+" = "+ fr5.PrintFraction();
	
	Fraction fr6=fr1/fr2;
	std::cout << fr1.PrintFraction(false)+" / "+fr2.PrintFraction(false)+" = "+ fr6.PrintFraction();
	
	Fraction fr7 = Fraction(2,4); //технически 1/2 = 2/4, поэтому процедура перегрузка оператора
								  //равенства выглядит как сравнение отношений числителей и знаменателей
	std::cout << fr7.PrintFraction(false)  << "==" << fr1.PrintFraction(false) << "?" << std::endl;
	std::cout << (fr7==fr1?"true":"false") << std::endl;
	std::cout << fr7.PrintFraction(false)  << "!=" << fr2.PrintFraction(false) << "?" << std::endl;
	std::cout << (fr7!=fr2?"true":"false") << std::endl;
	std::cout << fr7.PrintFraction(false)  << "<" << fr2.PrintFraction(false) << "?" << std::endl;
	std::cout << (fr7<fr2?"true":"false") << std::endl;
	std::cout << fr7.PrintFraction(false)  << ">" << fr2.PrintFraction(false) << "?" << std::endl;
	std::cout << (fr7>fr2?"true":"false") << std::endl;
	std::cout << fr7.PrintFraction(false)  << "<=" << fr1.PrintFraction(false) << "?" << std::endl;
	std::cout << (fr7<=fr1?"true":"false") << std::endl;
	std::cout << fr7.PrintFraction(false)  << "<=" << fr2.PrintFraction(false) << "?" << std::endl;
	std::cout << (fr7<=fr2?"true":"false") << std::endl;
	std::cout << fr7.PrintFraction(false)  << "=>=" << fr1.PrintFraction(false) << "?" << std::endl;
	std::cout << (fr7>=fr1?"true":"false") << std::endl;
	std::cout << fr7.PrintFraction(false)  << ">=" << fr2.PrintFraction(false) << "?" << std::endl;
	std::cout << (fr7>=fr2?"true":"false") << std::endl;
	/*Результат выполнения программы
	1/2
	1/4
	1/2 + 1/4 = 6/8
	1/2 - 1/4 = 2/8
	1/2 * 1/4 = 1/8
	1/2 / 1/4 = 4/2
	2/4==1/2?
	true
	2/4!=1/4?
	true
	2/4<1/4?
	false
	2/4>1/4?
	true
	2/4<=1/2?
	true
	2/4<=1/4?
	false
	2/4=>=1/2?
	true
	2/4>=1/4?
	true
	*/
}