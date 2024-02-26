#include<iostream>
#include<string>
#include "class.cpp"
#include "Magic.cpp"
class HalfMage: public Class_, public Magic{
private:
    int attacks_;
    int magic_skill;
public:
    HalfMage(int hp, std::string character):Class(2,hp,1,character)
};
class Paladin: public HalfMage{
private:
    std::string main_characteristic;
    int DiceHP;
public:
    Paladin():HalfMage(10,"charisma")
};
class Ranger: public HalfMage{
private:
    std::string main_characteristic;
    int DiceHP;
pubic:
    Ranger():HalfMage(10,"wisdom")
};
class Artificer: public HalfMage{
private:
    std::string main_characteristic;
    int DiceHP;
public:
    Artificer():HalfMage(8,"intelligence")
};


