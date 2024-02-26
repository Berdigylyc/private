#include<iostream>
#include<string>
class Magic{
private:
    std::string main_characteristic;
    int magic_skill;
public:
    std::string GetMainCharacteristic(){return(main_characteristic);}
    int GetMagicSkill(){
        if (magic_skill==2){
            std::cout<<"—правка: в первом столбце выбираете нужный вам уровень, затем смотрите кака€ цифра написанна в €чейке под первой строкой (уровень €чейки). Ёто число и будет количеством €чейки нужного уровн€"<<std::endl;
            std::cout<<"   1 2 3 4 5 6 7 8 9"<<std::endl;
            std::cout<<" 1 2 0 0 0 0 0 0 0 0"<<std::endl;
            std::cout<<" 2 3 0 0 0 0 0 0 0 0"<<std::endl;
            std::cout<<" 3 4 2 0 0 0 0 0 0 0"<<std::endl;
            std::cout<<" 4 4 3 0 0 0 0 0 0 0"<<std::endl;
            std::cout<<" 5 4 3 2 0 0 0 0 0 0"<<std::endl;
            std::cout<<" 6 4 3 3 0 0 0 0 0 0"<<std::endl;
            std::cout<<" 7 4 3 3 1 0 0 0 0 0"<<std::endl;
            std::cout<<" 8 4 3 3 2 0 0 0 0 0"<<std::endl;
            std::cout<<" 9 4 3 3 3 1 0 0 0 0"<<std::endl;
            std::cout<<"10 4 3 3 3 2 0 0 0 0"<<std::endl;
            std::cout<<"11 4 3 3 3 2 1 0 0 0"<<std::endl;
            std::cout<<"12 4 3 3 3 2 1 0 0 0"<<std::endl;
            std::cout<<"13 4 3 3 3 2 1 1 0 0"<<std::endl;
            std::cout<<"14 4 3 3 3 2 1 1 0 0"<<std::endl;
            std::cout<<"15 4 3 3 3 2 1 1 1 0"<<std::endl;
            std::cout<<"16 4 3 3 3 2 1 1 1 0"<<std::endl;
            std::cout<<"17 4 3 3 3 2 1 1 1 1"<<std::endl;
            std::cout<<"18 4 3 3 3 3 1 1 1 1"<<std::endl;
            std::cout<<"19 4 3 3 3 3 2 1 1 1"<<std::endl;
            std::cout<<"20 4 3 3 3 3 2 2 1 1"<<std::endl;
        }
        if (magic_skill==1){
            std::cout<<"—правка: в первом столбце выбираете нужный вам уровень, затем смотрите кака€ цифра написанна в €чейке под первой строкой (уровень €чейки). Ёто число и будет количеством €чейки нужного уровн€"<<std::endl;
            std::cout<<"   1 2 3 4 5"<<std::endl;
            std::cout<<" 1 0 0 0 0 0"<<std::endl;
            std::cout<<" 2 2 0 0 0 0"<<std::endl;
            std::cout<<" 3 3 0 0 0 0"<<std::endl;
            std::cout<<" 4 3 0 0 0 0"<<std::endl;
            std::cout<<" 5 4 2 0 0 0"<<std::endl;
            std::cout<<" 6 4 2 0 0 0"<<std::endl;
            std::cout<<" 7 4 3 0 0 0"<<std::endl;
            std::cout<<" 8 4 3 0 0 0"<<std::endl;
            std::cout<<" 9 4 3 2 0 0"<<std::endl;
            std::cout<<"10 4 3 2 0 0"<<std::endl;
            std::cout<<"11 4 3 3 0 0"<<std::endl;
            std::cout<<"12 4 3 3 0 0"<<std::endl;
            std::cout<<"13 4 3 3 1 0"<<std::endl;
            std::cout<<"14 4 3 3 1 0"<<std::endl;
            std::cout<<"15 4 3 3 2 0"<<std::endl;
            std::cout<<"16 4 3 3 2 0"<<std::endl;
            std::cout<<"17 4 3 3 3 1"<<std::endl;
            std::cout<<"18 4 3 3 3 1"<<std::endl;
            std::cout<<"19 4 3 3 3 2"<<std::endl;
            std::cout<<"20 4 3 3 3 2"<<std::endl;
        }
        }
    int GetRampage(int lvl){
         if (lvl<3)
	         return 2;
         if (lvl<6)
        	 return 3;
         if (lvl<12)
	         return 4;
         if (lvl<16)
                return 5;
         return 6;
        };
    int GetDamage(){return (lvl/8+2);}
};

