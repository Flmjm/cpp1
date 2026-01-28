#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " construct" << std::endl;
}

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << _name << " destruct" << std::endl;
}

void Zombie::initName(std::string name)
{
	_name = name;
}
