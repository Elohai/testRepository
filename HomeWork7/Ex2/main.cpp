#include "Date.h"

std::unique_ptr<Date>* greaterDate(std::unique_ptr<Date>  &date1, std::unique_ptr<Date> &date2){ //Так как стоит задача не затирать данные в умных указателях 
    bool firstIsGreater=false;                                                                   //я решил возвращать ссылку (ведь умные указатели копировать, вроде как, нельзя)
    if(date1->GetYear()>date2->GetYear()){
        firstIsGreater=true;
    }
    else if(date1->GetYear()==date2->GetYear()){
        if(date1->GetMonth()>date2->GetMonth()){
            firstIsGreater=true;
        }
        else if(date1->GetMonth()==date2->GetMonth()){
            if(date1->GetDay()>date2->GetDay()){
                firstIsGreater=true;
            }           
        }
    }
    if(firstIsGreater){
        return &date1;
    }
    else
        return &date2;
}


void SwapDateUniquePointers(std::unique_ptr<Date>  &date1, std::unique_ptr<Date> &date2){
    std::unique_ptr<Date> temp = std::move(date1);
    date1 = std::move(date2);
    date2 = std::move(temp);
    temp=nullptr;
    
}


int main(){    
    auto date1 = std::make_unique<Date>(1,2,2020);
    auto date2 = std::make_unique<Date>(2,1,2021); 
    std::cout<<*(*greaterDate(date1,date2));
    std::cout<<*date1.get();
    SwapDateUniquePointers(date1,date2);
    std::cout<<*date1.get();
}
