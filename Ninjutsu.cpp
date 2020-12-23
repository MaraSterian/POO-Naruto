#include "Ninjutsu.h"

#include <utility>

Ninjutsu::Ninjutsu(std::string new_ninjutsu_name, std::string new_ninjutsu_rank, std::string new_users)
         :Jutsu(std::move(new_ninjutsu_name), std::move(new_ninjutsu_rank), std::move(new_users)) {}

void Ninjutsu::add_chakra_nature(const Chakra_Nature& chakra_nature) {
    Jutsu::add_chakra_nature(chakra_nature);
}

std::string Ninjutsu::get_class_name() {
    return "ninjutsu";
}

Ninjutsu::~Ninjutsu() = default;
