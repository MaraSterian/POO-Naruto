#include "Team.h"

Team::Team(std::string new_team_name, std::string new_leader, std::string new_affiliations)
        : team_name(new_team_name), leader(new_leader), affiliations(new_affiliations) {}

const std::string& Team::get_team_name() const {return team_name;}

std::string Team::get_leader() {
    return leader;
}

std::string Team::get_affiliations() {
    return affiliations;
}

void Team::add_shinobi(const Shinobi& shinobi)
{
    shinobis.push_back(shinobi);
}


std::ostream& operator<<(std::ostream& out, const Team& team)
{
    out<<"Team: ";

    if (team.shinobis.empty())
    {
        out<<team.get_team_name()<<" has no members.\n";
        return out;
    }

    for (const auto& shinobi : team.shinobis)
    {
        out<<shinobi.get().get_shinobi_name()<<" ";
    }

    out<<'\n';

    return out;
}