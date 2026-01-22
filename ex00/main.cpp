#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "utils.hpp"

int main()
{
	Zombie *theForgetten = NULL;

	printSlow("Welcome to Zlab", "default");

	std::cout << std::endl;
	std::cout << std::endl;

	while (1)
	{
		std::string usrType;

		std::cout << std::endl;
		std::cout << std::endl;

		if (theForgetten)
			printSlow("zLab : Q(quit) 1(randomChump) 2(newZombie) 3(destruct the zombie on heap)", "fast");
		else
			printSlow("zLab : Q(quit) 1(randomChump) 2(newZombie)", "fast");

		std::cout << std::endl;

		std::cin >> usrType;

		std::cout << std::endl;
		std::cout << std::endl;

		if (quit(usrType))
			break ;
		else if (usrType == "1")
		{	
			std::string tmp;

			printSlow("whats name for the new one come ?", "default");
			std::cout << std::endl;

			std::cin.ignore();
			std::getline(std::cin, tmp);

			std::cout << std::endl;
			std::cout << std::endl;

			randomChump(tmp);
		}
		else if (usrType == "2")
		{
			std::string tmp;

			if (theForgetten)
			{
				printSlow("We already have too much Zombie in the lab, supress one before", "default");
				std::cout << std::endl;
				continue ;
			}

			printSlow("whats name for the new one come ?", "default");
			std::cout << std::endl;

			std::cin.ignore();
			std::getline(std::cin, tmp);

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
				printSlow("Oh, yes ... it hurts", "slow");
			}
			std::cout << std::endl;
		}

	}

	if (theForgetten)
	{
		while (1)
		{
			std::string usrType;

			printSlow("Ho, the lab is not empty, i need you'r confirmation to kill our Zombheap (q or Q to kill)", "default");

			std::cin >> usrType;
			if (quit(usrType))
				break ;

		}

		delete theForgetten;
	}

	return 0;
}
