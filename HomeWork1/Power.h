#pragma once
class Power
{
	private:
		int base;
		int power;
	public:
		Power() :base(2), power(4){
		}
		void SetBase(int newBase);
		void SetPower(int newPower);
		void Calculate();

	
};

