#ifndef POO_GENJUTSU_H
#define POO_GENJUTSU_H
#include "Jutsu.h"


class Genjutsu: public Jutsu {

public:
    Genjutsu(std::string new_genjutsu_name, std::string new_genjutsu_rank, std::string new_users);
    void add_chakra_nature(const Chakra_Nature& chakra_nature) override;
    static std::string get_class_name();
};


#endif //POO_GENJUTSU_H
