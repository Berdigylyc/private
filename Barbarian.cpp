#include <iostream>
#include "Nomage.cpp"
#include "Magic.cpp"

class Barbarian_ : public NoMage_, public Magic_{
private:
    int attaks_=2;
    int DiceHP_=12;
    int m =0;
public:
    int showattaks(int lvl){
    if (lvl >= 5){return 2;}
    else {return 1;}
    }
};
