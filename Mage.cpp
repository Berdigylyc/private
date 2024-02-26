#include <iostream>
#include <string>
#include "class.cpp"
#include "Magic.cpp"

class Mage_ : virtual public Class_, public Magic{
private:
    int attacks_ = 1;
    int magic_skill = 2;
};
class Wizard: public Mage_{
private:
    std::string main_characteristic = "intelligence";
    int DiceHP = 6;
};
class Bard: public Mage_{
private:
    std::string main_characteristic = "charisma";
    int DiceHP = 8;
};
class Druid: public Mage_{
private:
    std::string main_characteristic = "Wisdom";
    int DiceHP = 8;
};
