#include <iostream>
#include <string>
#include <unistd.h>
#include "Colors.hpp"

int main()
{
    std::cout << "we have a string init like this :" <<std::endl;

    std::string myString = "HI THIS IS BRAIN";

    std::cout << BOLDBLUE << "std::string myString = \"HI THIS IS BRAIN\";" << RESET << std::endl;
    std::cout << std::endl;

    std::cout << "we define a reference to this string :" << std::endl;

	std::string &stringREF = myString;

    std::cout << BOLDBLUE << "std::string &stringREF = myString;" << RESET << std::endl;
    std::cout << std::endl;

    std::cout << "So, we have :" << std::endl;
    std::cout << "myString      -->  " << GREEN << myString << RESET << std::endl;
    std::cout << "stringREF     -->  " << GREEN << stringREF << RESET << std::endl;
	std::cout << std::endl;

	std::cout << BOLDCYAN << "&" << RESET << "myString     -->  " << RED << &myString << RESET << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "stringREF    -->  " << RED << &stringREF << RESET << std::endl;
	std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "After this, we can see a pointer" << std::endl;

	std::string *stringPTR = &myString;

    std::cout << BOLDBLUE << "std::string *stringPTR = &myString;" << RESET << std::endl;
    std::cout << std::endl;


    std::cout << "So, finally we have :" << std::endl;
    std::cout << std::endl;
    std::cout << "myString      -->  " << GREEN << myString << RESET << std::endl;
    std::cout << "stringREF     -->  " << GREEN << stringREF << RESET << std::endl;
    std::cout << "stringPTR     -->  " << RED << stringPTR << RESET << std::endl;
	std::cout << BOLDMAGENTA << "*" << RESET << "stringPTR     -->  " << GREEN << *stringPTR << RESET << std::endl;
    std::cout << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "myString     -->  " << RED << &myString << RESET << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "stringREF    -->  " << RED << &stringREF << RESET << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "stringPTR     -->  " << YELLOW << &stringPTR << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "We can use for exemple :" << std::endl;
    myString.append(" EXEMPLE");
    std::cout << BOLDBLUE << "myString.append(\" EXEMPLE\");" << RESET << std::endl;

    std::cout << "And we have :" << std::endl;
    std::cout << std::endl;
    std::cout << "myString      -->  " << GREEN << myString << RESET << std::endl;
    std::cout << "stringREF     -->  " << GREEN << stringREF << RESET << std::endl;
	std::cout << "stringPTR     -->  " << RED << stringPTR << RESET << std::endl;
    std::cout << BOLDMAGENTA << "*" << RESET << "stringPTR     -->  " << GREEN << *stringPTR << RESET << std::endl;
    std::cout << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "myString     -->  " << RED << &myString << RESET << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "stringREF    -->  " << RED << &stringREF << RESET << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "stringPTR     -->  " << YELLOW << &stringPTR << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "and :" << std::endl;
    stringPTR->erase(10);
    std::cout << BOLDBLUE << "stringPTR->erase(10);" << RESET << std::endl;

    std::cout << "And we have :" << std::endl;
    std::cout << std::endl;
    std::cout << "myString      -->  " << GREEN << myString << RESET << std::endl;
    std::cout << "stringREF     -->  " << GREEN << stringREF << RESET << std::endl;
    std::cout << "stringPTR     -->  " << RED << stringPTR << RESET << std::endl;
	std::cout << BOLDMAGENTA << "*" << RESET << "stringPTR     -->  " << GREEN << *stringPTR << RESET << std::endl;
    std::cout << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "myString     -->  " << RED << &myString << RESET << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "stringREF    -->  " << RED << &stringREF << RESET << std::endl;
    std::cout << BOLDCYAN << "&" << RESET << "stringPTR     -->  " << YELLOW << &stringPTR << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}
