#include "Taijutsu.h"

Taijutsu::Taijutsu(std::string new_taijutsu_name, std::string new_taijutsu_rank, std::string new_users)
        :Jutsu(new_taijutsu_name, new_taijutsu_rank, new_users) {}

void Taijutsu::add_chakra_nature(const Chakra_Nature& chakra_nature) {
    Jutsu::add_chakra_nature(chakra_nature);
}