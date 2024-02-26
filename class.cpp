#include <iostream>


class Class_{
private:
    int attacks_;
    int DiceHP_;
public:
    virtual int showattaks(){}
    int showDiceHP(){return DiceHP_;}
    int showMaxAttaks(){return attacks_;}
};
