#pragma once
#include <string>

class Human
{
	private:
		int age = 0;
		std::string firstname = "first";
		std::string lastname = "last";
	public:
		Human();
		void setage(int);
		int getage();
		std::string getfirstname();
		void setfirstname(std::string);
		std::string getlastname();
		void setlastname(std::string);
		std::string getfullname();
};