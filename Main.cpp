#include <iostream>
#include <string>
#include "HalfMage.cpp"
#include "Mage.cpp"
#include "Nomage.cpp"
#include "class.cpp"

int main(){
    while (true){
    std::cout<<"Choose class"<<std::endl;
    std::cout<<"Wa-warrior"<<std::endl;
    std::cout<<"M-monk"<<std::endl;
    std::cout<<"B-Barbarian"<<std::endl;
    std::cout<<"P-paladin"<<std::endl;
    std::cout<<"R-ranger"<<std::endl;
    std::cout<<"A-Artificer"<<std::endl;
    std::cout<<"Wi-wizard"<<std::endl;
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
        delete a;
    }
    if (i=="M"){
        Monk_* a=new Monk_();
        std::cout<<"What's level?(not more then 20)"<<std::endl;
        std::cin>>lvl;
        std::cout<<"Number of attacks:"<<std::endl;
        std::cout<<a->showattaks()<<std::endl;
        std::cout<<"Dice of HP:"<<std::endl;
        std::cout<<a->showDiceHP()<<std::endl;
        std::cout<<"number of CI"<<std::endl;
        std::cout<<a->showCI_(lvl)<<std::endl;
        delete a;
    }
    if (i=="B"){
        Barbarian_* a=new Barbarian_();
        std::cout<<"What's level?(not more then 20)"<<std::endl;
        std::cin>>lvl;
        std::cout<<"Number of attacks:"<<std::endl;
        std::cout<<a->showattaks()<<std::endl;
        std::cout<<"Dice of HP:"<<std::endl;
        std::cout<<a->showDiceHP()<<std::endl;
        std::cout<<"Rage damage:"<<std::endl;
        std::cout<<a->GetDamage(lvl)<<std::endl;
        std::cout<<"Number of rage:"<<std::endl;
        std::cout<<a->GetRampage(lvl)<<std::endl;
        delete a;
    }
    if (i=="P"){
        Paladin* a=new Paladin();
        std::cout<<"number of attacks "<<a->showattaks()<<std::endl;
        std::cout<<"number of DiceHP "<<a->showDiceHP()<<std::endl;
        std::cout<<"number of magic_skill "<<a->GetMagicSkill()<<std::endl;
        std::cout<<"Main Characteristic is "<<a->GetMainCharacteristic()<<std::endl;
}
    if (i=="R"){
        Ranger* a=new Ranger();
        std::cout<<"number of attacks "<<a->showattaks()<<std::endl;
        std::cout<<"number of DiceHP "<<a->showDiceHP()<<std::endl;
        std::cout<<"number of magic_skill "<<a->GetMagicSkill()<<std::endl;
        std::cout<<"Main Characteristic is "<<a->GetMainCharacteristic()<<std::endl;
}
    if (i=="A"){
        Artificer* a=new Artificer();
        std::cout<<"number of attacks "<<a->showattaks()<<std::endl;
        std::cout<<"number of DiceHP "<<a->showDiceHP()<<std::endl;
        std::cout<<"number of magic_skill "<<a->GetMagicSkill()<<std::endl;
        std::cout<<"Main Characteristic is "<<a->GetMainCharacteristic()<<std::endl;
}
    if (i=="Wi"){
        Wizard* a=new Wizard();
        std::cout<<"number of attacks "<<a->showattaks()<<std::endl;
        std::cout<<"number of DiceHP "<<a->showDiceHP()<<std::endl;
        std::cout<<"number of magic_skill "<<a->GetMagicSkill()<<std::endl;
        std::cout<<"Main Characteristic is "<<a->GetMainCharacteristic()<<std::endl;
}
    if (i=="b"){
        Bard* a=new Bard();
        std::cout<<"number of attacks "<<a->showattaks()<<std::endl;
        std::cout<<"number of DiceHP "<<a->showDiceHP()<<std::endl;
        std::cout<<"number of magic_skill "<<a->GetMagicSkill()<<std::endl;
        std::cout<<"Main Characteristic is "<<a->GetMainCharacteristic()<<std::endl;
}
    if (i=="D"){
        Druid* a=new Druid();
        std::cout<<"number of attacks "<<a->showattaks()<<std::endl;
        std::cout<<"number of DiceHP "<<a->showDiceHP()<<std::endl;
        std::cout<<"number of magic_skill "<<a->GetMagicSkill()<<std::endl;
        std::cout<<"Main Characteristic is "<<a->GetMainCharacteristic()<<std::endl;
    }
    std::cout<<"Do you want to end?(y/n)"<<std::endl;
    char r;
    std::cin>>r;
    if (r=='y'){ break;}
    }
}
