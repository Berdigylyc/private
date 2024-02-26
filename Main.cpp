#include <iostream>
#include <string>
#include "Warrior.cpp"
#include "Monk.cpp"
#include "Barbarian.cpp"
#include "HalfMage.cpp"
#include "Mage.cpp"
#define Magic
#define NoMage_

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
        std::cout<<"Number of attacks:"<<std::endl;
        a->showattaks();
        std::cout<<"Dice of HP:"<<std::endl;
        a->showDiceHP();
        delete[] a;
    }
    if (i=="M"){
        Monk_* a=new Monk_();
        std::cout<<"What's level?"<<std::endl;
        std::cin>>lvl;
        std::cout<<"Number of attacks:"<<std::endl;
        a->showattaks();
        std::cout<<"Dice of HP:"<<std::endl;
        a->showDiceHP();
        std::cout<<"number of CI"<<std::endl;
        a->showCI_(lvl);
        delete[] a;
    }
    if (i=="B"){
        Barbarian_* a=new Barbarian_();
        std::cout<<"Number of attacks:"<<std::endl;
        a->showattaks();
        std::cout<<"Dice of HP:"<<std::endl;
        a->showDiceHP();
        std::cout<<"Rage damage:"<<std::endl;
        a->GetRampage();
        std::cout<<"Number of rage:"<<std::endl;
        a->GetRampage();
        delete[] a;
    }
}
