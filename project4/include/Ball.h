#include <string>
#include<iostream>

class Ball
{
private:
    std::string m_color ;
    double m_radius;
    public:
    Ball (double rad);
       

       
    
    Ball ( const std::string &color="black",double rad=10.0);
       
   
  
    void print();
   
};