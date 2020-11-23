#include <string>
struct Point{
	int x;
	int y;
	public:
		Point(int i,int j):x(i),y(j){};
};

class IllegalCommand{
private:
	Point m_point;
	char m_dir;
public:
	IllegalCommand(Point point, char dir):m_point(point),m_dir(dir){};
	std::string getError();
};
class OffTheField{
private:
	Point m_point;
	char m_dir;
public:
	OffTheField(Point point, char dir):m_dir(dir),m_point(point){};
	std::string getError();
};
