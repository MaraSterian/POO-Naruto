#ifndef POO_NINJUTSU_H
#define POO_NINJUTSU_H
#include "Jutsu.h"


class Ninjutsu: public Jutsu {

//protected:
    //std::string ninjutsu_name;
    //std::vector<std::reference_wrapper<const Chakra_Nature>> Chakra_natures{};
    //std::string ninjutsu_rank;
    //std::string users;

public:
    Ninjutsu(std::string new_ninjutsu_name, std::string new_ninjutsu_rank, std::string new_users);
    virtual void add_chakra_nature(const Chakra_Nature& chakra_nature);
};


#endif //POO_NINJUTSU_H
