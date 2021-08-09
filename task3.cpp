#include <iostream>

using namespace std;

enum class Monster
{
    
    orc,
    goblin,
    troll,
    orge,
    skeletonse
};

int main()
{
    Monster m { Monster::troll};
    
    return 0;
}
