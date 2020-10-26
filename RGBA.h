#include <cstdint>
#include <iostream>
using namespace std;
class RGBA
{
private:
	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha = 255;

public:
	RGBA(){
	
	}
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha):m_red(red),m_blue(blue),m_green(green),m_alpha(alpha) {
		
	}
	void Print() {
	
		cout << "Value of m_red : " << (int)m_red << endl
			<< "Value of m_blue : "	<< (int)m_blue << endl
			<< "Value of m_green : "<< (int)m_green<<endl
			<< "Value of m_alpha : "<< (int)m_alpha<<endl;	
	}
};

