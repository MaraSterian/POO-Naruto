#include <iostream>
#include "Jutsu.h"

Jutsu::Jutsu() {}

Jutsu::Jutsu(std::string new_name, std::string new_classification/*, std::vector<std::reference_wrapper<const Chakra_Nature>>& New_Chakra_natures*/, std::string new_jutsu_rank, std::string new_users)
        : name(new_name), classification(new_classification)/*, Chakra_natures{New_Chakra_natures}*/, jutsu_rank(new_jutsu_rank), users(new_users) {}

std::string Jutsu::get_name() {
    return name;
}

std::string Jutsu::get_classification() {
    return classification;
}

void Jutsu::get_chakra_nature(const Chakra_Nature& chakra_nature)
{
    Chakra_natures.push_back(chakra_nature);
}

std::string Jutsu::get_jutsu_rank() {
    return jutsu_rank;
}

std::string Jutsu::get_users() {
    return users;
}

void Jutsu::jutsu_method() {
    std::cout<<name<<" - "<<classification<<" - "<<jutsu_rank<<"\n";
}

std::ostream& operator<<(std::ostream& out, const Jutsu& jutsu)
{
    out<<jutsu.name<<" chakra: ";

    for (const auto& chakra_nature : jutsu.Chakra_natures)
    {
        out << chakra_nature.get().get_chakra_name() << ' ';
    }

    out << '\n';

    return out;
}
Jutsu::~Jutsu() {
    std::cout<<"And that's the "<<name<<" jutsu!\n";
}
