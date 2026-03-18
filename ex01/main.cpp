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
        if (!(std::cin >> usrType))
			break ;
        std::cout << "type her name" << std::endl;
		if (!(std::cin >> name))
			break ;

        Zombie *horde = NULL;
        horde = zombieHorde(usrType, name);

        std::cout << std::endl;

        for (int i = 0; i < usrType; i++)
            horde[i].announce();

        delete[] horde;

    }
}
