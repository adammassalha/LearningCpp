#pragma once
#include <string>
#include<iostream>

class Date
{
private:
    int m_day ;
    int m_month;
    int m_year;

public:
    Date()=default;
    Date (int year,int month,int day);
    void setday(int day);
    void setMonth(int month);
        
    void setYear(int year);
    void copy(Date day);
    
    int getDay(){return m_day;}
    int getMonth(){return m_month;}
    int getYear(){return m_year;}
    
    void print(int day,int month,int year);
   
};