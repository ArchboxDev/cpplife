#include <cstdlib>
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <vector>
#include "utils/colors.h"
#include "class/human.h"

int main(int argc, char const *argv[])
{
	std::string line;
	std::ifstream fstream;

	std::vector<std::string> fM;
	std::vector<std::string> fF;
	std::vector<std::string> lG;

	int lines = 0;
	fstream.open("firstnames0.txt");
	while(getline(fstream,line))
	{
		lines++;
		fM.push_back(line);
	}
	fstream.close(); lines=0; line="";

	fstream.open("firstnames1.txt");
	while(getline(fstream,line))
	{
		lines++;
		fF.push_back(line);
	}
	fstream.close(); lines=0; line="";

	fstream.open("lastnames.txt");
	while(getline(fstream,line))
	{
		lines++;
		lG.push_back(line);
	}
	fstream.close(); lines=0; line="";

	std::cout << "\e[1mcpplife\e[0m\nbased on bumet1's jslife\nenjoy i guess" << std::endl;

	person novus;
	novus.setage(17);
	novus.setfirstname("asshole");
	novus.setlastname("mcgee");
	std::cout << novus.getfullname() << " is " << green << novus.getage() << std::endl;
	std::cout << white;

	std::cin.ignore();
	return 0;
}