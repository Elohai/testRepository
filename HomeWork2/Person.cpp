#pragma once
#include "Person.h"

void Person::SetAge(int n_age)
{
	age=n_age;
}
void Person::SetName(std::string n_name)
{
	name=n_name;
}
void Person::SetWeight(int n_weight)
{
	weight =n_weight;
}
std::string Person::Greeting()
{
	return "Hello!\r\nMy name is " +
		name+",\r\nI'm a "+
		(male?"boy":"girl")+
		"\r\nI'm "+
		std::to_string(age)+
		" years old, and my weight is "+
		std::to_string(weight)+" kilos\r\n";
}
