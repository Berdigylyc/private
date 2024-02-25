#include<iostream>
#include<string>
class Magic{
private:
    std::string main_characteristic;
    int magic_skill;
public:
    std::string GetMainCharacteristic(){return(main_characteristic);}
    int GetMagicSkill(){return(magic_skill);}
    int GetRampage(){
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
    int GetDamage(){return (lvl/8+2)};
};

