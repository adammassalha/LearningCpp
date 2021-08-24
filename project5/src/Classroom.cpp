#include "Classroom.h"

   Classroom::Classroom(int id ,Student arr [5] ,int size)
   {
        m_classsize=size;
        m_id=id;
        for(int i=0;i<m_classsize;i++)
        {
            m_students[i].copy(arr[i]);
        }
   }
   void Classroom::copy(Classroom classroom1){
        m_id = classroom1.m_id;
        m_classsize=classroom1.m_classsize;
        for(int i=0;i<m_classsize;i++){
             m_students [i].copy(classroom1.m_students[i]);
        }
          
     m_classsize= classroom1.m_classsize;
   }
double Classroom::GetClassAvg()
    {
        double sum = 0;
        double avg = 0;
         
        for (int i = 0; i<m_classsize; i++)
        {
            sum+= m_students[i].GetAverage();
        }
        avg = sum / m_classsize;;
      
        return avg;
    }
     Student Classroom::findmax()
    {
        Student maxx;
     
        for (int i = 0; i < 4; i++)
        {
            if (m_students[i].GetAverage() > m_students[i+1].GetAverage())
            {
               maxx= m_students[i];
            }
        }
        return maxx;
    }



