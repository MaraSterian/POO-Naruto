#include "Chakra_Nature.h"

Chakra_Nature::Chakra_Nature(const std::string &new_chakra_nature_name)
              :chakra_nature_name{new_chakra_nature_name} {}

const std::string& Chakra_Nature::get_chakra_name() const {return chakra_nature_name;}