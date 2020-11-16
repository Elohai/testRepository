#include "Pair.h"
template<class T>class StringValuePair:public Pair<std::string,T>{
	private:
		std::string m_first;
		T m_second;
	public:
		StringValuePair(std::string first,T second):Pair<std::string,T>(first,second){};
	};
