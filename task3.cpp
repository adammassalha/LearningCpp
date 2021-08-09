#include <iostream>

using namespace std;

enum class Monster
{
    
    orc = 2,
    goblin=2,
    troll,
    orge,
    skeletonse
};

int main()
{
    Monster m { Monster::troll};

    return 0;
}

/*
a-yes
b-yes
c-no
d-yes
e-yes
f-yes

*/