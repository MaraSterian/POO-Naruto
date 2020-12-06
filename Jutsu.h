#ifndef POO_JUTSU_H
#define POO_JUTSU_H
#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include "Chakra_Nature.h"
#include "Ninjutsu.h"
#include "Genjutsu.h"
#include "Taijutsu.h"

class Jutsu {

protected:
    std::string jutsu_name;
    std::vector<std::reference_wrapper<const Chakra_Nature>> Chakra_natures{};
    std::string jutsu_rank;
    std::string users;

public:
    //Jutsu();
    Jutsu(const std::string& new_jutsu_name, std::string new_jutsu_rank, std::string new_users);
    const std::string& get_jutsu_name() const;
    virtual void add_chakra_nature(const Chakra_Nature& chakra_nature);
    std::string get_jutsu_rank();
    std::string get_users();
    void jutsu_method();
    friend std::ostream& operator<<(std::ostream& out, const Jutsu& jutsu);
    ~Jutsu();
};


#endif //POO_JUTSU_H
