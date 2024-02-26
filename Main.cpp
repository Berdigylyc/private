#include <iostream>
#include <string>
#include "Warrior.cpp"
#include "Monk.cpp"
#include "Barbarian.cpp"
#include "HalfMage.cpp"
#include "Mage.cpp"

int main(){
    std::cout<<"Choose class"<<std::endl;
    std::cout<<"Wa-warrior"<<std::endl;
    std::cout<<"M-monk"<<std::endl;
    std::cout<<"B-Barbarian"<<std::endl;
    std::cout<<"P-paladin"<<std::endl;
    std::cout<<"R-ranger"<<std::endl;
    std::cout<<"A-Artificer"<<std::endl;
    std::cout<<"Wi-wisard"<<std::endl;
    std::cout<<"D-druid"<<std::endl;
    std::cout<<"b-bard"<<std::endl;
    std::string i;
    int lvl;
    std::cin>>i;
    if (i=="Wa"){
        Warrior_* a=new Warrior_();
        std::cout<<"What's level?"<<std::endl;
        std::cin<<lvl;
        a.showattaks();
        a.showDiceHP();
    }
    if (i=="Wa"){
        Warrior_* a=new Warrior_();
        std::cout<<"What's level?"<<std::endl;
        std::cin<<lvl;
        a.showattaks();
        a.showDiceHP();
    }
}
