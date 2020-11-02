#include "Student.h"
int main()
{
	Person boy = Person(12,45,"James",1);
	boy.Greeting();
	Person anotherBoy = Person(1);
	anotherBoy.SetAge(11);
	anotherBoy.SetWeight(42);
	anotherBoy.SetName("Bill");
	anotherBoy.Greeting();
	Person girl =Person(11,35,"Miranda",0);
	girl.Greeting();
	Person anotherGirl=Person();
	anotherGirl.SetAge(10);
	anotherGirl.SetWeight(30);
	anotherGirl.SetName("Emma");
	anotherGirl.Greeting();
	Student student = Student(19,35,"Miranda",0,2);
	student.Greeting();
	student.UpGrade();
	student.Greeting();
}
