#include <iostream>
#include "class.cpp"
#include "Magic.cpp"
class NoMage_ : public Class_{
private:
    int attacks_=2;
};
class Barbarian_ : public NoMage_, public Magic{
private:
    int DiceHP_=12;
    int magic_skill=0;
public:
    Barbarian_();
    ~Barbarian_();
};
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
class Warrior_: public NoMage_{
private:
    int attacks_=4;
    int DiceHP_=10;
public:

};
