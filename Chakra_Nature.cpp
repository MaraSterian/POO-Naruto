#include "Chakra_Nature.h"
#include <utility>

Chakra_Nature::Chakra_Nature(std::string new_chakra_nature_name)
              :chakra_nature_name{std::move(new_chakra_nature_name)} {}

Chakra_Nature::Chakra_Nature(const Chakra_Nature &Chakra_Nature_Name) {
            chakra_nature_name=Chakra_Nature_Name.chakra_nature_name;
}

const std::string& Chakra_Nature::get_chakra_name() const {return chakra_nature_name;}

