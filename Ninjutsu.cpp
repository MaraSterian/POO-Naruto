#include "Ninjutsu.h"

Ninjutsu::Ninjutsu(std::string new_ninjutsu_name, std::string new_ninjutsu_rank, std::string new_users)
         :Jutsu(new_ninjutsu_name, new_ninjutsu_rank, new_users) {}

void Ninjutsu::add_chakra_nature(const Chakra_Nature& chakra_nature) {
    Jutsu::add_chakra_nature(chakra_nature);
}


