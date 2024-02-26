#include <iostream>
#include <string>
#include "class.cpp"
#include "Magic.cpp"

class Mage_ : virtual public Class_, public Magic{
public:
    int attacks_ = 1;
    int magic_skill = 2;
    Mage_(int a,int b, str r):Class_(1,b), Magic(2,r);
};
class Wizard: public Mage_{
public:
    std::string main_characteristic = "intelligence";
    Wizard(): Mage_(6, "Intelligence"){}
};
class Bard: public Mage_{
public:
    std::string main_characteristic = "charisma";
    Bard(): Mage_(8, "Charisma"){}
};
class Druid: public Mage_{
public:
    std::string main_characteristic = "Wisdom";
    Druid(): Mage_(8, "Wisdom"){}
};
