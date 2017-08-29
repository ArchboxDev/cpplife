#include <vector>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fstream>

//srand(unsigned time(NULL));

class Sim
{
	private:
		int year;
		bool muteNewJobs;
	public:
		Sim();
		void NameInfo();
		bool Roll();
		std::string RandomGender();
		std::vector<std::string> GenerateName(std::string);
		void GetNameContent();
		void Year();
};