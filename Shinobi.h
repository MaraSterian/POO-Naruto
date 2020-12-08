#ifndef POO_SHINOBI_H
#define POO_SHINOBI_H
#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include "Jutsu.h"

class Shinobi
{
private:
    std::string shinobi_name{};
    std::string sex;
    std::string shinobi_rank;
    std::vector<std::reference_wrapper<const Jutsu>> jutsus{};
public:
    Shinobi(std::string  new_shinobi_name, std::string new_sex, std::string new_shinobi_rank);

    [[nodiscard]] const std::string& get_shinobi_name() const;

    std::string get_sex();
    std::string get_shinobi_rank();

    void add_jutsu(const Jutsu& jutsu);

    friend std::ostream& operator<<(std::ostream& out, const Shinobi& shinobi);
};


#endif //POO_SHINOBI_H
