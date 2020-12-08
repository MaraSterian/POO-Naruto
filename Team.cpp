#include "Team.h"
#include <utility>

Team::Team(std::string new_team_name, std::string new_leader, std::string new_affiliations)
        : team_name(std::move(new_team_name)), leader(std::move(new_leader)), affiliations(std::move(new_affiliations)) {}

const std::string& Team::get_team_name() const {return team_name;}

void Team::add_shinobi(const Shinobi& shinobi)
{
    shinobis.emplace_back(shinobi);
}


std::ostream& operator<<(std::ostream& out, const Team& team)
{
    out<<"Team "<<team.get_team_name()<<" - ";

    if (team.shinobis.empty())
    {
        out<<" has no members.\n";
        return out;
    }

    for (const auto& shinobi : team.shinobis)
    {
        out<<shinobi.get().get_shinobi_name()<<" ";
    }

    out<<" - leader "<<team.leader<<'\n';

    return out;
}