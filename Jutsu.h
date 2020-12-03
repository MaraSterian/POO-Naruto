#ifndef NARUTO_JUTSU_H
#define NARUTO_JUTSU_H
#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include "Chakra_Nature.h"

class Jutsu {

private:
    std::string name;
    std::string classification;
    std::vector<std::reference_wrapper<const Chakra_Nature>> Chakra_natures{};
    std::string jutsu_rank;
    std::string users;

public:
    Jutsu();
    Jutsu(std::string new_name, std::string new_classification/*, std::vector<std::reference_wrapper<const Chakra_Nature>>& New_Chakra_natures*/, std::string new_jutsu_rank, std::string new_users);
    std::string get_name();
    std::string get_classification();
    void get_chakra_nature(const Chakra_Nature& chakra_nature);
    std::string get_jutsu_rank();
    std::string get_users();
    void jutsu_method();
    friend std::ostream& operator<<(std::ostream& out, const Jutsu& jutsu);
    ~Jutsu();
};


#endif //NARUTO_JUTSU_H
