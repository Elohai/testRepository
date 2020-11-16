#include <string>
template <class T,class S> class Pair{};
template <typename U> class Pair<std::string,U>{
	private:
		std::string m_first;
		U m_second;
	public:
		Pair(std::string first,U second):m_first(first),m_second(second){};
		std::string first(){
			return m_first;
		}
		U second(){
			return m_second;
		}
};

