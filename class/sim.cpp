#include "sim.h"
#include <vector>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
#include <iostream>

Sim::Sim(void)
{
	std::cout <<"new sim object\n";

	this->year = 0;

	std::cout << this->year << "\n";

	this->GetNameContent();

	//this->Populate();
}

void Sim::NameInfo()
{
	// nothing for now
}

bool Sim::Roll()
{
	bool d;

	double u = (rand() % 1000) / 10000.0;

	int r1 = floor(u*1000);
	d = r1>=500;

	u = (rand() % 1000) / 10000.0;

	int r2 = floor(u*1000);
	return r2>=500 == d;
}

std::string Sim::RandomGender() {
	return this->Roll()?"male":"female";
}

std::vector<std::string> Sim::GenerateName(std::string f = "NULL")
{
	f = f=="NULL"?this->RandomGender():f;
}

void Sim::GetNameContent()
{

	std::string line;
	std::ifstream fstream;

	static std::vector<std::string> fM;
	static std::vector<std::string> fF;
	static std::vector<std::string> lG;

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

	//std::vector<char> this->names;
}
