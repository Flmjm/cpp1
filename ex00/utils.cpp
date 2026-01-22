#include "utils.hpp"

bool quit(std::string usrType)
{
    if (usrType == "q" || usrType == "Q")
        return true;
    return false;
}

void print10(std::string str)
{
    if (str == "")
        return ;
    for (int i = 0; str[i] && i < 10; i++)
    {    
        if (i == 9 && str.size() >= 10)
            std::cout << "." << std::flush;
        else
            std::cout << str[i];
    }
}

void printSlow(std::string str, std::string speed)
{
    int spd = 50000;
    if (speed == "fast")
        spd = 10000;
    else if (speed == "slow")
        spd = 100000;
    else if (speed == "vslow")
        spd = 500000;
    for (size_t i = 0; i < str.size(); i++)
    {    
        std::cout << str[i] << std::flush;
        usleep(spd);
    }
}