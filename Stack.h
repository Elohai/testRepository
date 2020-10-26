#pragma once
#define ARR_SIZE 10
#include <iostream>
using namespace std;
class Stack
{
private:
	int stack[ARR_SIZE];
	int length = 0;
public:
	void Reset() {
		for (int i = 0; i < ARR_SIZE; i++)
		{
			stack[i] = 0;
		}
		length = 0;	
	}

	bool Push(int newElement)
	{
		if (length != ARR_SIZE)
		{
			stack[length++] = newElement;
			return true;
		}
		else
			return false;	
	}

	int Pop()
	{
		if (length != 0) {
			int result = stack[length-1];
			stack[length--] = 0;
			cout << "Top value of stack is: " << result<<endl;
			return result;		
		}
		else
		{
			cout << ("There are no elements in the stack! The value of 0 is returned");
			return 0;
		}	
	}
	void Print() 
	{
		cout << "Printing content of stack..." << endl;
		for (int i = 0; i < length; i++)
		{
			cout << i << ") " << stack[i]<<endl;
		}
		cout << "Content of stack successfully printed"<<endl;
	}
};

