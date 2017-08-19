#include <cstdlib>
#include <iostream>
//#include <string>
#include "utils/colors.h"
#include "class/human.h"
#include "class/sim.h"

int main(int argc, char const *argv[])
{
	Sim Sim;

	std::cout << "\e[1mcpplife\e[0m\nbased on bumet1's jslife\nenjoy i guess" << std::endl;

	Human novus;
	novus.setage(17);
	novus.setfirstname("asshole");
	novus.setlastname("mcgee");
	std::cout << novus.getfullname() << " is " << green << novus.getage() << std::endl;
	std::cout << white; //<< *fM;

	std::cin.ignore();
	return 0;
}