#ifndef POO_TAIJUTSU_H
#define POO_TAIJUTSU_H
#include "Jutsu.h"


class Taijutsu: public Jutsu {

private:
    std::string taijutsu_name;
    std::vector<std::reference_wrapper<const Chakra_Nature>> Chakra_natures{};
    std::string taijutsu_rank;
    std::string users;

public:
    Taijutsu(std::string new_taijutsu_name, std::string new_taijutsu_rank, std::string new_users);
    virtual void Jutsu::add_chakra_nature(const Chakra_Nature& chakra_nature);
};



#endif //POO_TAIJUTSU_H
