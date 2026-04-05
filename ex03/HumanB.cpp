#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	:_name(name), _weaponType(NULL)
{
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	if (_weaponType)
		std::cout << BOLDYELLOW << _name << RESET << " attacks with their " << RED << _weaponType->getType() <<  RESET << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	_weaponType = &newWeapon;
}

