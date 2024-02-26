#include <iostream>
#include "class.cpp"
#include "Magic.cpp"
class NoMage_ : public Class_{
private:
    int attacks_=2;
public:
    NoMage_(int a,int b):Class_(a,b){}
};
class Barbarian_ : public NoMage_, public Magic{
private:
    int DiceHP_=12;
    int magic_skill=0;
public:
};
class Monk_ : public NoMage_{
private:
    int DiceHP_=8;
public:
    int showCI_(int lvl){
    if (lvl >= 2){return lvl;}
    else {return 0;}
    }
};
class Warrior_: public NoMage_{
private:
    int attacks_;
    int DiceHP_;
public:
    Warrior_(): NoMage_(4,10){}
};
