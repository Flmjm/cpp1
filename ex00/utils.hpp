#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <unistd.h>
#include <string>
#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

bool quit(std::string usrType);
void print10(std::string str);
void printSlow(std::string str, std::string speed);

#endif
