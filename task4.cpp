/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Player
{
private:
    string m_name ;
    double m_hp=100 ;
    int m_level=1 ;
    public:
    
    double Gethp(){
        return m_hp;
    }
    void Sethp(double x){
        if(x>0){
         m_hp=x;   
        }
        else{
            cout<<"error";
        }
    }
    
     double Getlevel(){
        return m_level;
    }
    void Setlevel(int y){
        if(y>0){
         m_level=y;   
        }
        else{
            cout<<"error";
        }
    }
   void print(){
       cout<<"hp:"<<m_hp<<endl;
       cout<<"level:"<<m_level<<endl;
       cout<<"name:"<<m_name<<endl;
       
   }
     string Getname(){
        return m_name;
    }
    void Setname(string z)
    {
       
       
    if (z.find(',') != string::npos||z.find('.') != string::npos||z.find(34) != string::npos){
        cout << "error";
        exit(3);
        }
        if(z.length()<3){
            cout<<"your name is short";
            exit(3);
        }
         if(z.length()>14){
            cout<<"your name is long";
            exit(3);
        }
        m_name=z;
    }
    
};

int main()
{
    string z;
    Player p;
   getline(cin,z);
   p.Setname(z);
 
    p.print();
    
    

    return 0;
}
