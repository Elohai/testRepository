#include <string>

class Person{
public:
	int age, weight;
	std::string name;
	bool male;
	Person():age(0),weight(3),name("Baby"),male(0){};
	Person(bool male):age(0),weight(3),name("Baby"),male(1){};
	Person(int c_age,int c_weight,std::string c_name,bool c_male):age(c_age),weight(c_weight),name(c_name),male(c_male)
	{

	};
	void SetName(std::string n_name);
	void SetAge(int n_age);
	void SetWeight(int n_weight);
	std::string Greeting();
};
