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

Zombie::~Zombie()
{
	std::cout << _name << RED << " destruct" << RESET << std::endl;
}
