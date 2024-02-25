#include <iostream>

class Class_{
private:
    int attaks_;
    int DiceHP_;
public:
    virtual int showattaks(){}
    int showDiceHP(){return DiceHP_;}
    int showMaxAttaks(){return attaks_}
};
