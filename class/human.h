#include <string>

class person
{
	private:
		int age = 0;
		std::string firstname = "first";
		std::string lastname = "last";
	public:
		void setage(int);
		int getage();
		std::string getfirstname();
		void setfirstname(std::string);
		std::string getlastname();
		void setlastname(std::string);
		std::string getfullname();
};
 
void person::setage(int _age)
{
	this->age = _age;
}

int person::getage()
{
	return this->age;
}

std::string person::getfirstname()
{
	return this->firstname;
}

void person::setfirstname(std::string _first)
{
	this->firstname = _first;
}

std::string person::getlastname()
{
	return this->lastname;
}

void person::setlastname(std::string _last)
{
	this->lastname = _last;
}

std::string person::getfullname()
{
	return this->firstname + " " + this->lastname;
}