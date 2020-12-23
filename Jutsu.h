#ifndef POO_JUTSU_H
#define POO_JUTSU_H
#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include "Chakra_Nature.h"

class Jutsu {

protected:
    std::string jutsu_name{};
    std::vector<std::reference_wrapper<const Chakra_Nature>> Chakra_natures;
    std::string jutsu_rank;
    [[maybe_unused]] std::string users;

public:
    //Jutsu();
    Jutsu(std::string  new_jutsu_name, std::string new_jutsu_rank, std::string  new_users);
    [[nodiscard]] const std::string& get_jutsu_name() const;
    virtual void add_chakra_nature(const Chakra_Nature& chakra_nature);
    void jutsu_method();
    friend std::ostream& operator<<(std::ostream& out, const Jutsu& jutsu);
    virtual ~Jutsu();
};


#endif //POO_JUTSU_H
