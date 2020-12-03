#ifndef PROBA3_NINJUTSU_H
#define PROBA3_NINJUTSU_H
#include "Jutsu.h"


class Ninjutsu: public Jutsu {

private:
    std::string ninjutsu_name;

public:
    Ninjutsu(std::string new_ninjutsu_name);
    std::string get_ninjutsu_name();


};


#endif //PROBA3_NINJUTSU_H
