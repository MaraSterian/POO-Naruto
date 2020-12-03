#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include "Team.h"



Shinobi::Shinobi(const std::string& new_shinobi_name, std::string new_sex, std::string new_shinobi_rank)
        : shinobi_name{new_shinobi_name}, sex(new_sex), shinobi_rank(new_shinobi_rank) {}


const std::string& Shinobi::get_shinobi_name() const {return shinobi_name;}


std::string Shinobi::get_sex() {
    return sex;
}

std::string Shinobi::get_shinobi_rank() {
    return shinobi_rank;
}