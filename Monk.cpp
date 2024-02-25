#include <iostream>
#include "Nomage.cpp"

class Monk_ : public NoMage_{
private:
    int attaks_=2;
    int DiceHP_=8;
    bool CI_ = true;
public:
    int showattaks(int lvl){
    if (lvl >= 2){return lvl;}
    else {return 0;}
    }
    int showCI_(int lvl){
    if (lvl >= 5){return 2;}
    else {return 1;}
    }
};
