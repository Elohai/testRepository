#include "robot.h"

void Robot::Move(char dir){
	std::ostringstream os;
	os<<"moving from ("<<position.x<<","<<position.y<<")";
	switch(dir){
		case('u'):
			if(position.y==9)
				throw OffTheField(position,dir);
			position.y++;
			break;
		case('d'):
			if(position.y==0)
				throw OffTheField(position,dir);
			position.y--;
			break;
		case('r'):
			if(position.x==9)
				throw OffTheField(position,dir);
			position.x++;
			break;
		case('l'):
			if (position.x==0)
				throw OffTheField(position,dir);
			position.x--;
			break;
		default:
			throw IllegalCommand(position,dir);
	}
	os<<" to ("<<position.x<<","<<position.y<<")\r\n";
	std::cout<<os.str();
}
