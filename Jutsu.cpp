#include <iostream>
#include "Jutsu.h"

//Jutsu::Jutsu() = default;

Jutsu::Jutsu(const std::string& new_jutsu_name, std::string new_jutsu_rank, std::string new_users)
        : jutsu_name{new_jutsu_name}, jutsu_rank(new_jutsu_rank), users(new_users) {}

const std::string& Jutsu::get_jutsu_name() const {return jutsu_name;}

void Jutsu::add_chakra_nature(const Chakra_Nature& chakra_nature)
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
    std::cout<<jutsu_name<<" - "<<jutsu_rank<<"\n";
}

std::ostream& operator<<(std::ostream& out, const Jutsu& jutsu)
{
    out<<jutsu.jutsu_name<<" chakra: ";

    for (const auto& chakra_nature : jutsu.Chakra_natures)
    {
        out<<chakra_nature.get().get_chakra_name()<<' ';
    }

    out<<'\n';

    return out;
}
Jutsu::~Jutsu() {
    std::cout<<"And that's the "<<jutsu_name<<" jutsu!\n";
}
