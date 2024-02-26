#include<iostream>
#include<string>
#include "class.cpp"
#include "Magic.cpp"
class HalfMage: virtual public Class{
private:
    int attacks_ =2;
    int magicskill =1;
public:
    int ShowAttacks(){return(attacks_)}
};
class Paladin: public HalfMage{
private:
    std::string main_characteristic = "charisma";
    int DiceHP = 10;
};
class Ranger: public HalfMage{
private:
    std::string main_characteristic = "wisdom";
    int DiceHP = 10;
};
class Artificer: public HalfMage{
private:
    std::string main_characteristic = "intelligence";
    int DiceHP = 8;
};


