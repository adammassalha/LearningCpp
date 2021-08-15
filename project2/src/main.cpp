#include "shh.h"



int main()
{
    int sum;
    int x;
    std::cin>>x;
   sum=readNumber(x);
    int y;
    std::cin>>y;
    sum+=readNumber(y);
    writeNumber(sum);
}