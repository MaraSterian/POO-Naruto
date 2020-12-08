#ifndef POO_NINJUTSU_H
#define POO_NINJUTSU_H
#include "Jutsu.h"


class Ninjutsu: public Jutsu {

public:
    Ninjutsu(std::string new_ninjutsu_name, std::string new_ninjutsu_rank, std::string new_users);
    void add_chakra_nature(const Chakra_Nature& chakra_nature) override;
    static std::string get_class_name();
};


#endif //POO_NINJUTSU_H
