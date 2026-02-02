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
	std::cout << _name << " attacks with their " << _weaponType.getType() << std::endl;
}
