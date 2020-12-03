#include <iostream>
#include "Team.h"
#include "Shinobi.h"
#include "Village.h"
#include "Jutsu.h"
#include <functional>
#include <iostream>
#include <string>
#include <vector>

int main()
{

    Shinobi naruto{ "Naruto", "male", "genin" };
    Shinobi sasuke{ "Sasuke", "male", "genin" };
    Shinobi sakura{ "Sakura", "female", "chunin" };

    Village konohagakure{"Konohagakure", "Land of Fire", "Hokage"};


    Jutsu uchiha_flame_formation("Uchiha Flame Formation", "Ninjutsu, Barrier Ninjutsu", "B-rank", "Obito Uchiha");
    uchiha_flame_formation.jutsu_method();
    Chakra_Nature fire_release("Fire release");
    uchiha_flame_formation.get_chakra_nature(fire_release);
    std::cout<<uchiha_flame_formation;

    Team team_7{"Team 7", "Kakashi", "konohagakure"};

    team_7.get_shinobi(naruto);
    team_7.get_shinobi(sasuke);
    team_7.get_shinobi(sakura);
    std::cout<<team_7;

    std::cout<<naruto.get_shinobi_name()<<", "<<sasuke.get_shinobi_name()<<", "<<sakura.get_shinobi_name()<<" belong to "<<team_7.get_team_name()<<"\n";

    konohagakure.get_team(team_7);
    std::cout<<konohagakure;

    return 0;

}