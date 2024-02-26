#include<iostream>
#include<string>
#include "class.cpp"
#include "Magic.cpp"
class HalfMage: public Class_, public Magic{
private:
    int attacks_ =2;
    int magic_skill =1;
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


