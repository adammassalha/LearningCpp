#include "Student.h"
#include "Date.h"

    Student::Student (int id, std::string name,Date birthday, int grades[3], int gradesize){
        std::string str = std::to_string(id);
	    int lengthofNumber = str.length();
	
        if(lengthofNumber!=5){
            exit (3);
        }
        m_id=id;
        m_name=name;
        m_birthday.copy(birthday);
        for(int i=0;i<3;i++){
             m_grades[i]=grades[i];
        }
        m_grades_size = gradesize;
    }

    void Student::copy(Student student1){
       m_id = student1.m_id;
       m_name =student1.m_name;
       m_birthday.copy(student1.m_birthday);
       for(int i=0;i<3;i++){
           m_grades[i]=student1.m_grades[i];
       }
       m_grades_size=student1.m_grades_size;
        

    }
    
    void Student::Print(){
        std::cout << "Student id: " << m_id<<std::endl;
        std::cout << "---------------" << std::endl;
        std::cout << "Name: " << m_name << std::endl;
        std::cout << "Birthday:"<< m_birthday.getDay() << "/" << m_birthday.getMonth() << "/" << m_birthday.getYear() << std::endl;
        std::cout << "avg:" << GetAverage() << std::endl << std::endl;
        
    }
    int Student::GetAverage(){
        int sum = 0;
        int avg = 0;
        
        for(int i=0;i<m_grades_size;i++){
            sum+=m_grades[i];
        }
        avg=sum/m_grades_size;
        return avg;
    }