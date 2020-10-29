#include "Power.h"
#include <iostream>
using namespace std;
void Power::SetBase(int newBase) {
	base = newBase;
}
void Power::SetPower(int newPower) {
	power = newPower;
}
void Power::Calculate() {
	int result = 1;;
	for (int i = 0; i < power; i++) {
		result *= base;
	}
	cout << result;
}