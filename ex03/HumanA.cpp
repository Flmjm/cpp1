#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	:_weaponType(weapon), _name(name)
{
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << BOLDCYAN << _name << RESET << " attacks with their " << RED << _weaponType.getType() << RESET << std::endl;
}
