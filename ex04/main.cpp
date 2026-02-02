#include <iostream>
#include <fstream>
#include <string>

int main(int argc,  char**argv)
{
	if (argc != 4)
	{
		std::cout << "./Sed [filename] [string] [string to replace]" << std::endl;
		return 1;
	}

	std::string filename(argv[1]), needle(argv[2]), replace(argv[3]);
	std::string lineRead;

	std::ifstream fileOpen(filename);
	if (!fileOpen)
	{
		std::cout << "Error, can't open " << filename << std::endl;
		return 1;
	}

	std::ofstream fileReplace(filename + ".replace");
	if (!fileReplace)
	{
		std::cout << "Error, can't open " << filename + ".replace" << std::endl;
		return 1;
	}

	while (getline(fileOpen, lineRead))
	{
		int i = 0;


		i = lineRead.find(needle);
		while (i != -1)
		{
			lineRead.erase(i , needle.length());
			lineRead.insert(i , replace);
			i = lineRead.find(needle);
		}


		fileReplace << lineRead << std::endl;
	}

	fileReplace.close();
	fileOpen.close();

	return 0;
}
