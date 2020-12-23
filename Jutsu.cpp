#include <iostream>
#include <utility>
#include "Jutsu.h"


Jutsu::Jutsu(std::string  new_jutsu_name, std::string new_jutsu_rank, std::string  new_users)
        : jutsu_name{std::move(new_jutsu_name)}, jutsu_rank(std::move(new_jutsu_rank)), users(std::move(new_users)) {}

const std::string& Jutsu::get_jutsu_name() const {return jutsu_name;}

void Jutsu::add_chakra_nature(const Chakra_Nature& chakra_nature)
{
    Chakra_natures.emplace_back(chakra_nature);
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

Jutsu::~Jutsu() = default;
