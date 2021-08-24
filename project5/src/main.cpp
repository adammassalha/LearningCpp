#include "Date.h"
#include "Student.h"
#include "Classroom.h"
#include <iostream>
#include <string>
#include <iostream>

int main() {
    
    int grades_size;
    std::cout<<"enter the gradesize: "<<std::endl;
    std::cin>> grades_size;
     
    
     


   // Student a {10000, "Mayyas Iktelat", Date(1, 10, 2000), student_1_grades, grades_size};
   // Student b {10001, "Muhammad Massalha", Date(1, 10, 2000), student_2_grades, grades_size};
   // Student c {10002, "Noor Iktelat", Date(1, 10, 2000), student_3_grades, grades_size};
   // Student d {10003, "Sonbol Yousef", Date(1, 10, 2000), student_4_grades, grades_size};
   // Student e {10004, "Sonbol Jijini", Date(1, 10, 2000), student_5_grades, grades_size};
      int y;
      std::cout<<"enter the students number:"<<std::endl;
    std::cin>>y;
    Student *tudent = new Student [y];
    for (int f = 0; f < y; f++)
    {
        int z;
        std::cout<<"enter the id:";
        std::cin>>z;
        std::string name;
        Date h;
        std::cout<<"enter the birhday:"<<std::endl;
        int v;
        std::cout<<" day:";
        std::cin>>v;
        int o;
        std::cout<<" month:";
        std::cin>>o;
        int c;
        std::cout<<" year:";
        std::cin>>c;
         h.setday(v);
          h.setMonth(o);
           h.setYear(c);
        std::cout<<"enter the name:";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::getline (std::cin,name);
        std::cout<<"---------------------------------------------"<<std::endl;
        std::cout<<"enter the grades:";
        
        int arr[grades_size];
        for (int i = 0; i < grades_size; i++)
        {
           std::cin>>arr[i];
        }
        
        tudent[f] = {z,name,h,arr,grades_size};
        

    }
    

   
     int class_1_size ;
     std::cin>>class_1_size;
    // Student students_1[class_1_size] = {tudent[]};

  Classroom class_1 {1,tudent, class_1_size};

  // for (Student &s : students_1)
      //  s.Print();

        for (int q = 0; q <y; q++)
        {
          tudent[q].Print();
        }
        

    std::cout << "class  average: " << class_1.GetClassAvg() << std::endl;

    return 0;
}