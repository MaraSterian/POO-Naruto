#ifndef POO_TAIJUTSU_H
#define POO_TAIJUTSU_H
#include "Jutsu.h"


class Taijutsu: public Jutsu {

public:
    Taijutsu(std::string new_taijutsu_name, std::string new_taijutsu_rank, std::string new_users);
    void add_chakra_nature(const Chakra_Nature& chakra_nature) override;
    static std::string get_class_name();
};



#endif //POO_TAIJUTSU_H
