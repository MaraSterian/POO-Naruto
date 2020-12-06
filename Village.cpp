#include <iostream>
#include "Village.h"

Village::Village(std::string new_village_name, std::string new_country, std::string new_leader)
        : village_name(new_village_name), country(new_country), leader(new_leader) {}

std::string Village::get_village_name() {
    return village_name;
}

std::string Village::get_country() {
    return country;
}

std::string Village::get_leader() {
    return leader;
}

void Village::add_team(const Team& team)
{
    teams.push_back(team);
}

std::ostream& operator<<(std::ostream& out, const Village& village)
{
    out<<village.village_name<<"'s teams are: ";

    for (const auto& team : village.teams)
    {
        out<<team.get().get_team_name()<<" ";
    }

    out<<'\n';

    return out;
}

Village::~Village() {
    std::cout<<"And that's "<<village_name<<"!\n";
}