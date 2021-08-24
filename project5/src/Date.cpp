#include "Date.h"
#include <string>
#include<iostream>


    Date::Date (int year,int month,int day){
        m_year = year;
        m_month = month;
        m_day = day;

    };
    void Date::setday(int day){
        m_day = day;
        
    }
    void Date::setMonth(int month){
        m_month = month;
        
    }
    void Date::setYear(int year){
        m_year=year;
        
    }
    
    void Date::print(int day,int month,int year){
        std::cout<<"("<<m_day<<","<<m_month<<","<<m_year<<")";
    }

    void Date::copy(Date date1){
        m_day =date1.m_day;
        m_month=date1.m_month;
        m_year=date1.m_year;
    }
   
