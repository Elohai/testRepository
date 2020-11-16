template <class T,class C>
class Pair{
private:
	T m_first;
	C m_second;
public:
	Pair()=delete;
	Pair(T first,C second):m_first(first),m_second(second){};
	T first()const{
		return m_first;
};
	C second()const{
		return m_second;
};
};
