#pragma once
#include "Student.h"

void Student::SetGrade(int n_grade)
{
	grade =n_grade;
}
void Student::UpGrade(){
	grade++;
	
}

void Student::Greeting()
{
	Person::Greeting();
	
	std::cout << "I'm at " << grade <<" grade!\r\n";
}
