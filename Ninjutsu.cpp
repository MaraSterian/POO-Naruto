#include "Ninjutsu.h"

Ninjutsu::Ninjutsu(std::string new_ninjutsu_name)
         : ninjutsu_name(new_ninjutsu_name) {}

std::string Ninjutsu::get_ninjutsu_name() {
    return ninjutsu_name;
}
