#include<iostream>
#include<string>
#include "class.cpp"
#include "magic.cpp"
class HalfMage: public Class{
private:
    int attacks_ =2;
    int magicskill =1;
public:
    int ShowAttacks(int lvl){return(attacks_)}
};
class Paladin: public HalfMage{
private:
    std::string main_characteristic = "charisma";
    int DiceHP = 10;
public:
    std::string GetMainCharacteristic(){return(main_characteristic);}
};
class Ranger: public HalfMage{
private:
    std::string main_characteristic = "wisdom";
    int DiceHP = 10;
public:
    std::string GetMainCharacteristic(){return(main_characteristic);}
};
class Artificer: public HalfMage{
private:
    std::string main_characteristic = "intelligence";
    int DiceHP = 8;
public:
    std::string GetMainCharacteristic(){return(main_characteristic);}
};


