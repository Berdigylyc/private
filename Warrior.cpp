#include <iostream>
#include "Nomage.cpp"

class Warrior_: public NoMage_{
private:
    int attaks_=4;
    int DiceHP_=10;
public:
    int showattaks(int lvl){
    if (lvl == 20){return 4;}
    else if (lvl >= 11){return 3;}
    else if (lvl >= 5){return 2;}
    else {return 1;}
    }
};
