#ifndef POO_GENJUTSU_H
#define POO_GENJUTSU_H
#include "Jutsu.h"


class Genjutsu: public Jutsu {

private:
    std::string genjutsu_name;
    std::vector<std::reference_wrapper<const Chakra_Nature>> Chakra_natures{};
    std::string genjutsu_rank;
    std::string users;

public:
    Genjutsu(std::string new_genjutsu_name, std::string new_genjutsu_rank, std::string new_users);
    virtual void add_chakra_nature(const Chakra_Nature& chakra_nature);
};


#endif //POO_GENJUTSU_H
