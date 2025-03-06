#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack()
{
    std::string weaponType = weapon.getType();
    if (weaponType.empty())
    {
        weaponType = "Unknown Weapon";
    }

    std::cout << name << " attacks with their " << weaponType << std::endl;
}
