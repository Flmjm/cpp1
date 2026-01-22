#include "utils.hpp"
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *newZ = new Zombie(name);
	return newZ;
}

void randomChump( std::string name )
{
	Zombie rdm(name);
	rdm.announce();
}