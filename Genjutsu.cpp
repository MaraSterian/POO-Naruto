#include "Genjutsu.h"

#include <utility>

Genjutsu::Genjutsu(std::string new_genjutsu_name, std::string new_genjutsu_rank, std::string new_users)
        :Jutsu(std::move(new_genjutsu_name), std::move(new_genjutsu_rank), std::move(new_users)) {}

void Genjutsu::add_chakra_nature(const Chakra_Nature& chakra_nature) {
    Jutsu::add_chakra_nature(chakra_nature);
}

std::string Genjutsu::get_class_name() {
    return "genjutsu";
}

Genjutsu::~Genjutsu() = default;