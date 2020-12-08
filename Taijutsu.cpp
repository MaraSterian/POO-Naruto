#include "Taijutsu.h"
#include <utility>

Taijutsu::Taijutsu(std::string new_taijutsu_name, std::string new_taijutsu_rank, std::string new_users)
        :Jutsu(std::move(new_taijutsu_name), std::move(new_taijutsu_rank), std::move(new_users)) {}

void Taijutsu::add_chakra_nature(const Chakra_Nature& chakra_nature) {
    Jutsu::add_chakra_nature(chakra_nature);
}

std::string Taijutsu::get_class_name() {
    return "taijutsu";
}