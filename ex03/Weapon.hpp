#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:

	Weapon();
	Weapon(std::string weaponName);
	~Weapon();
	const std::string	&getType();
	void setType(std::string weaponName);

	private:

	std::string _type;

};

#endif
