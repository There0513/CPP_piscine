#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wrong argument nbr." << std::endl;
		return 0;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line;
	size_t		it = 0;	// it added after correction to make work ./sed test1.txt cou coucou

	if (filename.length() == 0 || s1.length() == 0)
	{
		std::cout << "No filename or first string." << std::endl;
		return 0;
	}
	std::ifstream ini_file(filename.c_str());
	filename += ".replace";
	std::ofstream out_file(filename.c_str());

	if (ini_file && out_file)
	{
		while (std::getline(ini_file, line))
		{
			if (s1 != s2)		// replace s1 with s2
			{
				size_t pos = line.find(s1, it);
				while ((pos = line.find(s1, it)) != std::string::npos)
				{
					line.erase(pos, s1.length());
					line.insert(pos, s2);
					it = it + s2.length();
				}
			}
			out_file << line << "\n";
		}
	}
	else
		std::cout << "Something went wrong. Maybe the file does not exist?" << std::endl;
	ini_file.close();
	out_file.close();
	return 0;
}
