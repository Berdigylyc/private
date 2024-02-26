#include <iostream>
#include "Nomage.cpp"

class Monk_ : public NoMage_{
private:
    int DiceHP_=8;
    bool CI_ = true;
public:
    Monk_();
    ~Monk_();
    int showCI_(int lvl){
    if (lvl >= 5){return 2;}
    else {return 1;}
    }
};
