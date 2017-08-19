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
Human::Human()
{

}
 
void Human::setage(int _age)
{
	this->age = _age;
}

int Human::getage()
{
	return this->age;
}

std::string Human::getfirstname()
{
	return this->firstname;
}

void Human::setfirstname(std::string _first)
{
	this->firstname = _first;
}

std::string Human::getlastname()
{
	return this->lastname;
}

void Human::setlastname(std::string _last)
{
	this->lastname = _last;
}

std::string Human::getfullname()
{
	return this->firstname + " " + this->lastname;
}