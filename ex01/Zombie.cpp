#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << GREEN << " construct" << RESET << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Zombie " << GREEN << " construct" << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << RED << " destruct" << RESET << std::endl;
}

void Zombie::initName(std::string name)
{
	_name = name;
	std::cout << "Zombie take the name " << _name << std::endl;
}
