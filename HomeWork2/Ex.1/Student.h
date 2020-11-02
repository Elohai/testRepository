#include "Person.h"

class Student:public Person{
private:
	int grade;
public:
	Student():Person(),grade(0){};
	Student(bool male):Person(male),grade(0){};
	Student(int c_age,int c_weight,std::string c_name,bool c_male):Person(c_age,c_weight,c_name,c_male),grade(0)
	{

	};
	Student(int c_age,int c_weight,std::string c_name,bool c_male,int c_grade):Person(c_age,c_weight,c_name,c_male),grade(c_grade)
	{

	};
	void UpGrade();
	void SetGrade(int n_grade);
	void Greeting();
};
