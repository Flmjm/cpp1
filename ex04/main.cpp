#include <iostream>
#include <string>

int main(int argc,  char**argv)
{
	if (argc != 4)
	{
		std::cout << "./Sed [filename] [string] [string to replace]" << std::endl;
		return 1;
	}

	std::string filename(argv[1]), needle(argv[2]), haystack(argv[3]);

	int tmp = filename.find(needle);
	

	// while (filename.find(needle))
	// {

	// }

	return 0;
}
