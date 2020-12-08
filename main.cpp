#include <iostream>
#include "Shinobi.h"
#include "Village.h"
#include "Ninjutsu.h"
#include "Genjutsu.h"
#include "Taijutsu.h"
#include <string>

int main()
{
    std::cout<<"\n";

    Village konohagakure{"Konohagakure", "Land of Fire", "Hokage"};

    std::cout<<konohagakure.get_village_name()<<": "<<konohagakure.get_country()<<", "<<konohagakure.get_leader()<<";\n";

    std::cout<<"\n";

    Chakra_Nature fire_release("Fire release");
    Chakra_Nature wind_release("Wind release");
    Chakra_Nature lightning_release("Lightning release");
    Chakra_Nature earth_release("Earth release");
    Chakra_Nature water_release("Water release");
    Chakra_Nature yin_release("Yin release");
    Chakra_Nature yang_release("Yang release");

    std::cout<<"The Nature Transformations aka Chakra Natures are: "<<fire_release.get_chakra_name()<<", "<<wind_release.get_chakra_name()<<", "<<lightning_release.get_chakra_name()<<", "<<earth_release.get_chakra_name()<<", "<<water_release.get_chakra_name()<<", "<<yin_release.get_chakra_name()<<" and "<<yang_release.get_chakra_name()<<".\n";

    std::cout<<"\n";

    Shinobi naruto{ "Naruto", "male", "genin" };
    Shinobi sasuke{ "Sasuke", "male", "genin" };
    Shinobi sakura{ "Sakura", "female", "chunin" };
    Shinobi obito{"Obito", "male", "genin"};
    Shinobi kakashi{"Kakashi", "male", "jonin"};
    Shinobi utakata{"Utakata", "male", "jonin"};
    Shinobi gamariki{"Gamariki", "male", "toad"};
    Shinobi might_guy{"Might Guy", "male", "jonin"};

    Team team_7{"Team 7", kakashi.get_shinobi_name(), konohagakure.get_village_name()};

    team_7.add_shinobi(naruto);
    team_7.add_shinobi(sasuke);
    team_7.add_shinobi(sakura);

    konohagakure.add_team(team_7);

    std::cout<<konohagakure;

    std::cout<<team_7;

    std::cout<<naruto.get_shinobi_name()<<", "<<sasuke.get_shinobi_name()<<", "<<sakura.get_shinobi_name()<<" belong to "<<team_7.get_team_name()<<".\n";

    std::cout<<naruto.get_shinobi_name()<<": "<<naruto.get_sex()<<", "<<naruto.get_shinobi_rank()<<";\n";
    std::cout<<sasuke.get_shinobi_name()<<": "<<sasuke.get_sex()<<", "<<sasuke.get_shinobi_rank()<<";\n";
    std::cout<<sakura.get_shinobi_name()<<": "<<sakura.get_sex()<<", "<<sakura.get_shinobi_rank()<<";\n";
    std::cout<<kakashi.get_shinobi_name()<<": "<<kakashi.get_sex()<<", "<<kakashi.get_shinobi_rank()<<";\n";

    std::cout<<"\n";

    std::cout<<obito.get_shinobi_name()<<": "<<obito.get_sex()<<", "<<obito.get_shinobi_rank()<<";\n";

    Jutsu uchiha_flame_formation("Uchiha Flame Formation", "B-rank", obito.get_shinobi_name());
    uchiha_flame_formation.add_chakra_nature(fire_release);

    obito.add_jutsu(uchiha_flame_formation);

    std::cout<<obito.get_shinobi_name()<<"'s jutsu is "<<uchiha_flame_formation.get_jutsu_name()<<"\n";

    uchiha_flame_formation.jutsu_method();
    std::cout<<uchiha_flame_formation;

    std::cout<<"\n";

    std::cout<<utakata.get_shinobi_name()<<": "<<utakata.get_sex()<<", "<<utakata.get_shinobi_rank()<<";\n";

    Ninjutsu acid_flower{"Acid Flower", "S-rank", utakata.get_shinobi_name()};
    acid_flower.add_chakra_nature(water_release);

    utakata.add_jutsu(acid_flower);

    std::cout<<utakata.get_shinobi_name()<<"'s jutsu is "<<acid_flower.get_jutsu_name()<<"\n";

    std::cout<<acid_flower.get_jutsu_name()<<" is a type of "<<Ninjutsu::get_class_name()<<"\n";
    acid_flower.jutsu_method();
    std::cout<<acid_flower;

    std::cout<<"\n";

    std::cout<<gamariki.get_shinobi_name()<<": "<<gamariki.get_sex()<<", "<<gamariki.get_shinobi_rank()<<";\n";

    Genjutsu genjutsu_kiss{"Genjutsu Kiss", "B-rank", "Gamariki"};
    genjutsu_kiss.add_chakra_nature(yin_release);

    gamariki.add_jutsu(genjutsu_kiss);

    std::cout<<gamariki.get_shinobi_name()<<"'s jutsu is "<<genjutsu_kiss.get_jutsu_name()<<"\n";

    std::cout<<genjutsu_kiss.get_jutsu_name()<<" is a type of "<<Genjutsu::get_class_name()<<"\n";
    genjutsu_kiss.jutsu_method();
    std::cout<<genjutsu_kiss;

    std::cout<<"\n";

    std::cout<<might_guy.get_shinobi_name()<<": "<<might_guy.get_sex()<<", "<<might_guy.get_shinobi_rank()<<";\n";

    Taijutsu dynamic_entry{"Dynamic Entry", "D-rank", might_guy.get_shinobi_name()};

    might_guy.add_jutsu(dynamic_entry);

    std::cout<<might_guy.get_shinobi_name()<<"'s jutsu is "<<dynamic_entry.get_jutsu_name()<<"\n";

    std::cout<<dynamic_entry.get_jutsu_name()<<" is a type of "<<Taijutsu::get_class_name()<<"\n";
    dynamic_entry.jutsu_method();

    std::cout<<"\n";

    return 0;

}