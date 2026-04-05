#include <iostream>
#include <string>
#include "Zombie.hpp"
#include <unistd.h>

void randomChump( std::string name );
Zombie* newZombie( std::string name );

bool quit(std::string usrType)
{
    if (usrType == "q" || usrType == "Q")
        return true;
    return false;
}

int main()
{
	Zombie *theForgetten = NULL;
	int check = false;

	std::cout << "Welcome to Zlab" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	while (1)
	{
		std::string usrType;

		std::cout << std::endl;
		std::cout << std::endl;

		if (theForgetten)
			std::cout << "zLab : Q(quit) 1(randomChump) 2(newZombie) 3(destruct the zombie on heap)" << std::endl;
		else
			std::cout << "zLab : Q(quit) 1(randomChump) 2(newZombie)" << std::endl;

		if (!std::getline(std::cin, usrType))
		{
			check = true;
			break ;
		}

		std::cout << std::endl;
		std::cout << std::endl;

		if (quit(usrType))
			break ;
		else if (usrType == "1")
		{
			std::string tmp;

			std::cout << "whats name for the new one come ?" << std::endl;

			if (!std::getline(std::cin, tmp))
			{
				check = true;
				break ;
			}

			std::cout << std::endl;
			std::cout << std::endl;

			randomChump(tmp);
		}
		else if (usrType == "2")
		{
			std::string tmp;

			if (theForgetten)
			{
				std::cout << "We already have too much Zombie in the lab, supress one before" << std::endl;
				continue ;
			}

			std::cout << "whats name for the new one come ?" << std::endl;

			if (!std::getline(std::cin, tmp))
			{
				check = true;
				break ;
			}

			std::cout << std::endl;
			std::cout << std::endl;

			theForgetten = newZombie(tmp);
			theForgetten->announce();
		}
		else if (usrType == "3")
		{

			if (theForgetten)
			{
				delete theForgetten;
				theForgetten = NULL;
				std::cout << std::endl;
				std::cout << "Oh, yes ... it hurts" << std::endl;
			}
		}

	}

	if (theForgetten)
	{
		while (!check && 1)
		{
			std::string usrType;

			std::cout << "Ho, the lab is not empty, i need you'r confirmation to kill our Zombheap (q or Q to kill)" << std::endl;

			std::getline(std::cin, usrType);
			if (quit(usrType))
				break ;

		}

		delete theForgetten;
	}

	return 0;
}
