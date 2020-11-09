#include "ArrayInt.h"

int main(){
	ArrayInt arr = ArrayInt();
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(5);
	arr.push_back(8);
	arr.push_back(7);
	arr.push_back(44);
	arr.push_back(12);
	arr.push_back(22);
	arr.push_back(41);
	arr.push_back(31);
	arr.push_back(35);
	arr.push_back(13);
	arr.push_back(65);
	arr.push_back(1);
	arr.print();
	arr.sort();
	arr.print();
	arr.pop_back();
	arr.print();
	arr.pop_front();
	arr.print();
}
