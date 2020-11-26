#include "Date.h"
std::ostream& operator<<(std::ostream &out,const Date &date){
    out << "Date: " << date.m_day << "." << date.m_month << "." << date.m_year << "\n";
    return out;
}

