#include "exceptions.h"
#include <sstream>
std::string IllegalCommand::getError(){
	std::ostringstream os;
	os<<"Unknown direction! I'm at ("<<m_point.x<<", "<<m_point.y<<"), direction is "<<m_dir<<"\r\n";
	return os.str();
}
std::string OffTheField::getError(){
	std::ostringstream os;
	os<<"Nowhere to go! I'm at ("<<m_point.x<<","<<m_point.y<<"), direction is "<<m_dir<<"\r\n";
	return os.str();
}
