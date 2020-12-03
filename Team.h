#ifndef PROBA2_TEAM_H
#define PROBA2_TEAM_H
#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include "Shinobi.h"


class Shinobi;
class Team
{
private:
    std::string team_name;
    std::string leader;
    std::string affiliations;
    std::vector<std::reference_wrapper<const Shinobi>> shinobis{};

public:
    Team(std::string new_team_name, std::string new_leader, std::string new_affiliations);

    const std::string& get_team_name() const;
    std::string get_leader();
    std::string get_affiliations();

    void get_shinobi(const Shinobi& shinobi);

    friend std::ostream& operator<<(std::ostream& out, const Team& team);

};

#endif //PROBA2_TEAM_H
