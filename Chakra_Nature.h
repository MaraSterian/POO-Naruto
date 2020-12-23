#ifndef POO_CHAKRA_NATURE_H
#define POO_CHAKRA_NATURE_H
#include <iostream>
#include <string>


class Chakra_Nature {

private:
    std::string chakra_nature_name;

public:
    explicit Chakra_Nature(std::string  new_chakra_nature_name);
    Chakra_Nature(const Chakra_Nature &Chakra_Nature_Name);
    [[nodiscard]] const std::string& get_chakra_name() const;
    Chakra_Nature& operator = (Chakra_Nature&& cnn) noexcept {
        if(this == &cnn)
            return *this;
        chakra_nature_name = cnn.chakra_nature_name;
        return *this;
    }
};


#endif //POO_CHAKRA_NATURE_H
