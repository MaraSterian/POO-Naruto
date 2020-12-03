#ifndef PROBA2_SHINOBI_H
#define PROBA2_SHINOBI_H
#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include "Team.h"

class Team;
class Shinobi
{
private:
    std::string shinobi_name{};
    std::string sex;
    std::string shinobi_rank;
public:
    Shinobi(const std::string& new_shinobi_name, std::string new_sex, std::string new_shinobi_rank);

    const std::string& get_shinobi_name() const;

    std::string get_sex();
    std::string get_shinobi_rank();
};


#endif //PROBA2_SHINOBI_H
