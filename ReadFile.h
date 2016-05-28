#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> ReadFile(std::string file)
{
	std::vector<std::string> list;
	std::ifstream fileIn(file);

	std::string str;
	while (getline(fileIn, str))
		list.push_back(str);
	return list;
}