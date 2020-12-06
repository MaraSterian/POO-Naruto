#include "Genjutsu.h"

Genjutsu::Genjutsu(std::string new_genjutsu_name, std::string new_genjutsu_rank, std::string new_users)
        :Jutsu(new_genjutsu_name, new_genjutsu_rank, new_users) {}

void add_chakra_nature(const Chakra_Nature& chakra_nature) {
    Jutsu::add_chakra_nature(chakra_nature);
}