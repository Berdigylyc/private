#include <iostream>
#include <string>
#include "class.cpp"
#include "Magic.cpp"

class Mage_ : public Class_, public Magic{
private:
    int attack_ = 1;
    int magic_skill = 2;
public:
    int GetAttack(){return (attack_);}
    int GetMagicSkill() {return(magicskill);}
};
class Wizard: public Mage_{
private:
    std::string main_characteristic = "intelligence";
    int DiceHP = 6;
public:
    std::string GetMainCharacteristic(){return(main_characteristic);}
    int GetDiceHP(){return(DiceHP);}
};
class Bard: public Mage_{
private:
    std::string main_characteristic = "charisma";
    int DiceHP = 8;
public:
    std::string GetMainCharacteristic(){return(main_characteristic);}
    int GetDiceHP(){return(DiceHP);}
};
class Druid: public Mage_{
private:
    std::string main_characteristic = "Wisdom";
    int DiceHP = 8;
public:
    std::string GetMainCharacteristic(){return(main_characteristic);}
    int GetDiceHP(){return(DiceHP);}
};
