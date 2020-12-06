#include "Shinobi.h"
#include <string>

Shinobi::Shinobi(const std::string& new_shinobi_name, std::string new_sex, std::string new_shinobi_rank)
        : shinobi_name{new_shinobi_name}, sex(new_sex), shinobi_rank(new_shinobi_rank) {}


const std::string& Shinobi::get_shinobi_name() const {return shinobi_name;}


std::string Shinobi::get_sex() {
    return sex;
}

std::string Shinobi::get_shinobi_rank() {
    return shinobi_rank;
}

void Shinobi::add_jutsu(const Jutsu& jutsu)
{
    jutsus.push_back(jutsu);
}


std::ostream& operator<<(std::ostream& out, const Shinobi& shinobi)
{
    out<<"Jutsu: ";

    for (const auto& jutsu : shinobi.jutsus)
    {
        out<<jutsu.get().get_jutsu_name()<<" ";
    }
    out<<'\n';

    return out;
}

