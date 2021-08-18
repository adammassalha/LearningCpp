#pragma once
#include "Date.h"

class Student
{
private:
    int m_id ;
    std::string m_name;
    Date m_birthday;
    int m_grades[3];
    int m_grades_size;
    public:
    void copy(Student student1);
    Student()=default;
    Student (int id,const std::string name,Date birthday, int grades[3],const int gradesize);
    void Print();
    int GetAverage();

 
};
