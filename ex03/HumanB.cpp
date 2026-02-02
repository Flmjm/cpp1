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
		std::cout << _name << " attacks with their " << _weaponType->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	_weaponType = &newWeapon;
}

