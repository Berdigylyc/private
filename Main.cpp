#include <iostream>
#include <string>
#include "HalfMage.cpp"
#include "Mage.cpp"
#include "Nomage.cpp"
#include "class.cpp"

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
        Class_* a=new Warrior_();
        std::cout<<"Number of attacks:"<<std::endl;
        std::cout<<a->showattaks()<<std::endl;
        std::cout<<"Dice of HP:"<<std::endl;
        std::cout<<a->showDiceHP()<<std::endl;
        delete[] a;
    }
    /*if (i=="M"){
        Monk_* a=new Monk_();
        std::cout<<"What's level?"<<std::endl;
        std::cin>>lvl;
        std::cout<<"Number of attacks:"<<std::endl;
        std::cout<<a->showattaks()<<std::endl;
        std::cout<<"Dice of HP:"<<std::endl;
        std::cout<<a->showDiceHP()<<std::endl;
        std::cout<<"number of CI"<<std::endl;
        std::cout<<a->showCI_(lvl)<<std::endl;
        delete[] a;
    }
    if (i=="B"){
        Barbarian_* a=new Barbarian_();
        std::cout<<"What's level?"<<std::endl;
        std::cin>>lvl;
        std::cout<<"Number of attacks:"<<std::endl;
        std::cout<<a->showattaks()<<std::endl;
        std::cout<<"Dice of HP:"<<std::endl;
        std::cout<<a->showDiceHP()<<std::endl;
        std::cout<<"Rage damage:"<<std::endl;
        std::cout<<a->GetDamage(lvl)<<std::endl;
        std::cout<<"Number of rage:"<<std::endl;
        std::cout<<a->GetRampage(lvl)<<std::endl;
        delete[] a;
    }*/
}
