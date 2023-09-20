#include "stringreplace.hpp"

std::string	replace_occurences(std::string &line, std::string &s1, std::string &s2)
{
	int index = line.find(s1);
	int start = 0;
	std::string new_line;

	// abc    start=0, index=1
	while(index != -1)
	{
		new_line += line.substr(start, index - start);
		new_line += s2;
		start = index + s1.size();
		index = line.find(s1, start);
	}
	new_line += line.substr(start);
	return new_line;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid number of arguments!\n";
		return 1;
	}
	std::ifstream input_file;
	std::ofstream output_file;
	input_file.open(av[1], std::ios::in);

	 if (!input_file.is_open()) {
        std::cerr << "Failed to open the input file!" << std::endl;
        return 1;
    }
	std::string s = ".replace";
	std::string output_file_name = av[1] + s;
	output_file.open(output_file_name, std::ios::out);
	if (!output_file.is_open())
	{
		std::cerr << "Failed to open the output_file!" << std::endl;
        return 1;
	}
	std::string line;
	std::string s1(av[2]);
	std::string s2(av[3]);
	while(std::getline(input_file, line))
	{
		line += '\n';
		line = replace_occurences(line, s1, s2);
		output_file << line;
	}
	input_file.close();
	output_file.close();
}
