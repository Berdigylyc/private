#include <iostream>
#include "class.cpp"
#include "Magic.cpp"
class NoMage_ : public Class_{
public:
    NoMage_(int a,int b):Class_(a,b){}
};
class Barbarian_ : public NoMage_, public Magic{
public:
    Barbarian_(): NoMage_(2,12), Magic(0,"Rage"){}
};
class Monk_ : public NoMage_{
public:
    int showCI_(int lvl){
    if (lvl >= 2){return lvl;}
    else {return 0;}
    }
    Monk_(): NoMage_(2,8){}
};
class Warrior_: public NoMage_{
public:
    Warrior_(): NoMage_(4,10){}
};
