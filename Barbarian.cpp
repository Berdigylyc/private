#include <iostream>
#include "Nomage.cpp"
#include "Magic.cpp"

class Barbarian_ : public NoMage_, public Magic{
private:
    int DiceHP_=12;
    int magic_skill =0;
public:
    Barbarian_();
    ~Barbarian_();
};
