#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	std::string filename, s1, s2, line;
	std::size_t pos = 0;

	if (argc != 4)
	{
		std::cout << "Error" << "\n";
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Empty string" << "\n";
		return (1);
	}
	std::ifstream infile (filename);
	if (infile.is_open())
	{
		filename.append(".replace");
		std::ofstream outfile (filename);
		if (outfile.is_open())
		{
			while (infile.eof() != true)
			{
				std::getline(infile, line);
				while ((pos = line.find(s1, pos + 1)) != std::string::npos)
				{
					// pos = 4
					line.replace(pos, s1.length(), s2);
					pos = pos + s2.length();
				}
				outfile << line;
				if (infile.eof() != true)
					outfile << '\n';
			}
			outfile.close();
		}
		else
			std::cout << "unable to open file\n";
		infile.close();
	}
	else
		std::cout << "unable to open file\n";
	return (0);
}
