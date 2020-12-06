#ifndef POO_CHAKRA_NATURE_H
#define POO_CHAKRA_NATURE_H
#include <iostream>
#include <string>


class Chakra_Nature {

private:
    std::string chakra_nature_name{};

public:
    Chakra_Nature(const std::string& new_chakra_nature_name);
    const std::string& get_chakra_name() const;
};


#endif //POO_CHAKRA_NATURE_H
