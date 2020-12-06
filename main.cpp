#include <iostream>
#include "Shinobi.h"
#include "Village.h"
#include "Jutsu.h"
#include <string>

int main()
{

    Shinobi naruto{ "Naruto", "male", "genin" };
    Shinobi sasuke{ "Sasuke", "male", "genin" };
    Shinobi sakura{ "Sakura", "female", "chunin" };
    Shinobi obito{"Obito", "male", "genin"};

    std::cout<<naruto.get_shinobi_name()<<": "<<naruto.get_sex()<<", "<<naruto.get_shinobi_rank()<<";\n";
    std::cout<<sasuke.get_shinobi_name()<<": "<<sasuke.get_sex()<<", "<<sasuke.get_shinobi_rank()<<";\n";
    std::cout<<sakura.get_shinobi_name()<<": "<<sakura.get_sex()<<", "<<sakura.get_shinobi_rank()<<";\n";

    Chakra_Nature fire_release("Fire release");
    Chakra_Nature water_release("Water release");
    Chakra_Nature yin_release("Yin release");

    Village konohagakure{"Konohagakure", "Land of Fire", "Hokage"};

    std::cout<<konohagakure.get_village_name()<<": "<<konohagakure.get_country()<<", "<<konohagakure.get_leader()<<";\n";

    Jutsu uchiha_flame_formation("Uchiha Flame Formation", "B-rank", obito.get_shinobi_name());
    uchiha_flame_formation.jutsu_method();
    obito.add_jutsu(uchiha_flame_formation);
    std::cout<<obito.get_shinobi_name()<<"'s jutsu is "<<uchiha_flame_formation.get_jutsu_name();

    uchiha_flame_formation.add_chakra_nature(fire_release);
    std::cout<<uchiha_flame_formation;

    Team team_7{"Team 7", "Kakashi", "konohagakure"};

    team_7.add_shinobi(naruto);
    team_7.add_shinobi(sasuke);
    team_7.add_shinobi(sakura);
    std::cout<<team_7;

    std::cout<<naruto.get_shinobi_name()<<", "<<sasuke.get_shinobi_name()<<", "<<sakura.get_shinobi_name()<<" belong to "<<team_7.get_team_name()<<"\n";

    konohagakure.add_team(team_7);
    std::cout<<konohagakure;

    Ninjutsu acid_flower{"Acid Flower", "S-rank", "Utakata"};
    acid_flower.add_chakra_nature(water_release); //nu m-am descurcat la functiile virtuale, o sa mai lucrez, am trimis pentru un feedback

    Genjutsu genjutsu_kiss{"Genjutsu Kiss", "B-rank", "Gamariki"};
    genjutsu_kiss.add_chakra_nature(yin_release);

    Taijutsu dynamic_entry{"Dynamic Entry", "D-rank", "Might Guy"};

    return 0;
    
    //in afara de functiile virtuale, mai e ceva ce nu merge, nu stiu inca cum sa rezolv, dar lucrez la asta
    
}
