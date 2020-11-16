template <class T>
class Pair1{
private:
	T m_first;
	T m_second;
public:
	Pair1()=delete;
	Pair1(T first,T second):m_first(first),m_second(second){};
	T first()const{
		return m_first;
};
	T second()const{
		return m_second;
};
};
