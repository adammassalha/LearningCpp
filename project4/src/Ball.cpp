#include "Ball.h"

    Ball:: Ball (double rad)
     {
         m_radius=rad;
         m_color="black";
     }
       

       
    
   Ball:: Ball ( const std::string &color,double rad){
     m_color=color;
     m_radius=rad;
    }
       
   
    void Ball:: print(){
        std::cout<< "color: "<<m_color<<", "<<"radius:"<<m_radius<<std::endl;
        
    }
