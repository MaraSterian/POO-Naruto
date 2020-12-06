#ifndef POO_VILLAGE_H
#define POO_VILLAGE_H
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include "Team.h"


class Village {

private:
    std::string village_name;
    std::string country;
    std::string leader;
    std::vector<std::reference_wrapper<const Team>> teams{};

public:
    Village(std::string new_village_name, std::string new_country, std::string new_leader);
    std::string get_village_name();
    std::string get_country();
    std::string get_leader();

    void add_team(const Team& team);

    friend std::ostream& operator<<(std::ostream& out, const Village& village);

    ~Village();

};


#endif //POO_VILLAGE_H
