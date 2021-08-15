#include "shh.h"




int readNumber()
{
    int x;
    std::cout<<"enter a number";
    std::cin>>x;
    int sum;
    sum = x;
    return sum;
}

void writeNumber(int sum)
{
    std::cout << sum;
}