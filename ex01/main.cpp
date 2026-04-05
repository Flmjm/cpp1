#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    while (1)
    {
        int usrType;
        std::string name;

        std::cout << "zLab : type numbers to create an horde of Z" << std::endl;
        if (!(std::cin >> usrType)) {std::cout << "Error" << std::endl; break ;}

        std::cout << "type her name" << std::endl;

		if (!(std::cin >> name)) {std::cout << "Error" << std::endl; break ;}

		Zombie *horde = NULL;

		std::cout << std::endl;

        horde = zombieHorde(usrType, name);

		std::cout << std::endl;

        for (int i = 0; i < usrType; i++)
            horde[i].announce();

		std::cout << std::endl;

        delete[] horde;

    }
}
