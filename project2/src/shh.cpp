#include "shh.h"




int readNumber()
{
    int x;
    std::cout<<"enter a number: "<<std::endl;
    std::cin>>x;
    int sum;
    sum = x;
    return sum;
}

void writeNumber(int sum)
{
    std::cout<<"the result is:"<<std::endl;
    std::cout << sum;
}