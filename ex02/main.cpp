#include <iostream>
#include <string>
#include <unistd.h>

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

int main()
{
    printSlow("Ok, for all mysterye we have its resolution", "default");
    std::cout << std::endl;
    std::cout << std::endl;
    printSlow("First,", "default");
    printSlow(" we need a string so init one like this :", "default");
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::string myString = "HI THIS IS BRAIN";
    printSlow("std::string myString = \"HI THIS IS BRAIN\";", "slow");
    std::cout << std::endl;
    std::cout << std::endl;
    
    printSlow("Ok, then, we define a reference to this string :", "slow");
    std::cout << std::endl;
    std::cout << std::endl;
    std::string &stringREF = myString;
    printSlow("std::string &stringREF = myString;", "slow");
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    printSlow("So, for the moment, we have :", "default");
    std::cout << std::endl;
    std::cout << "myString      -->  " << myString << std::endl;
    std::cout << "stringREF     -->  " << stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "&myString     -->  " << &myString << std::endl;
    std::cout << "&stringREF    -->  " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    printSlow("After this, we can see a pointer", "default");
    std::cout << std::endl;
    std::cout << std::endl;
    std::string *stringPTR = &myString;
    printSlow("std::string *stringPTR = &myString;", "slow");
    std::cout << std::endl;
    std::cout << std::endl;


    printSlow("So, finally we have :", "default");
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "myString      -->  " << myString << std::endl;
    std::cout << "stringREF     -->  " << stringREF << std::endl;
    std::cout << "stringPTR     -->  " << stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "&myString     -->  " << &myString << std::endl;
    std::cout << "&stringREF    -->  " << &stringREF << std::endl;
    std::cout << "&stringREF     -->  " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    printSlow("We can use for exemple :", "default");
    myString.append("EXEMPLE");
    printSlow("myString.append(\"EXEMPLE\");", "slow");
    std::cout << std::endl;
    std::cout << std::endl;
    
    printSlow("And we have :", "default");
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "myString      -->  " << myString << std::endl;
    std::cout << "stringREF     -->  " << stringREF << std::endl;
    std::cout << "stringPTR     -->  " << stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "&myString     -->  " << &myString << std::endl;
    std::cout << "&stringREF    -->  " << &stringREF << std::endl;
    std::cout << "&stringREF     -->  " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    printSlow("and :", "default");
    stringPTR->erase(10);
    printSlow("stringPTR->erase(10);", "slow");
    std::cout << std::endl;
    std::cout << std::endl;

    printSlow("And we have :", "default");
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "myString      -->  " << myString << std::endl;
    std::cout << "stringREF     -->  " << stringREF << std::endl;
    std::cout << "stringPTR     -->  " << stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "&myString     -->  " << &myString << std::endl;
    std::cout << "&stringREF    -->  " << &stringREF << std::endl;
    std::cout << "&stringREF     -->  " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}