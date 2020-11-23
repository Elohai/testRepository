#include <iostream>
#include <ctime>
#include <memory>
class Date{
    private:
        int m_day;
        int m_month;
        int m_year;
    public:
        Date():m_day(0),m_month(0),m_year(0){};
        Date(int day,int month,int year):m_day(day),m_month(month),m_year(year){};
        int GetDay()const{
            return m_day;
        }
        int GetMonth ()const{
            return m_month;
        }
        int GetYear ()const{
            return m_year;
        }
        friend std::ostream& operator<<(std::ostream &out, const Date &date);
};
