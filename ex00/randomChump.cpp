#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie rdm(name);
	rdm.announce();
}