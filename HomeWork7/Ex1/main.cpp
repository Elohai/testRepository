#include "Date.h"
#include <ctime>
#include <memory>
int main(){
    Date date1 = Date(1,12,2020);
    std::cout<<date1;
    time_t t =time(0);
    tm *now =gmtime(&t);
    auto today = std::make_unique<Date>(now->tm_mday,now->tm_mon,now->tm_year+1900);
    auto date = std::make_unique<Date>();
    std::cout<<"Today's day is "<<today->GetDay()<<std::endl;
    std::cout<<"Today's month is "<<today->GetMonth()<<std::endl;
    std::cout<<"Today's year is "<<today->GetYear()<<std::endl;
    std::cout<<*today;
    //std::cout<<*today.get();
    date=std::move(today);
    if(today==nullptr){        
        std::cout<<"today is a null pointer"<<std::endl;
    }
    else
        std::cout<<"today is not a null pointer"<<std::endl;
    if(date==nullptr){        
        std::cout<<"date is a null pointer"<<std::endl;
    }
    else
        std::cout<<"date is not a null pointer"<<std::endl;
   
}
