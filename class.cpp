#ifndef Class_123
#define Class_123
#include <iostream>
#include <string>
class Class_{
private:
    int attacks_;
    int DiceHP_;
public:
    Class_(int a, int b): attacks_(a), DiceHP_(b){}
    int showattaks(){return attacks_;}
    int showDiceHP(){return DiceHP_;}
};
#endif // Class_
