#pragma once
#include <string>
#include "Student.h"
class Classroom
{
private:
    int m_id ;
    Student m_students [5];
    int m_classsize;
    public:
   void copy(Classroom classroom1);
    Classroom() = default;
    Classroom(int id,Student arr[5],int size);
    double GetClassAvg( );
    Student findmax();
};