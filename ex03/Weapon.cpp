#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "punch";
}

Weapon::Weapon(std::string weaponName)
{
	_type = weaponName;
}

Weapon::~Weapon()
{
	_type = "punch";
}

const std::string &Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string weaponName)
{
	_type = weaponName;
}
