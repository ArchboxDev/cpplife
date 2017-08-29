#include <cstdlib>
#include <iostream>
//#include <string>
#ifdef WIN32
#include "utils/colors.h"
#else
#include "utils/colourslinux.h"
#endif
#include "class/human.h"
#include "class/sim.h"

int main(int argc, char const *argv[])
{
	Sim Sim;

	std::cout << "\e[1mcpplife\e[0m\nbased on bumet1's jslife\nenjoy i guess" << std::endl; //more like the most painful to debug [lang]life xd

	Human novus;
	novus.setage(17);
	novus.setfirstname("asshole");
	novus.setlastname("mcgee");
	std::cout << novus.getfullname() << " is " << green << novus.getage() << white << std::endl;

	std::cin.ignore();
	return 0;
}