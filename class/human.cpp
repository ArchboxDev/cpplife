#include "human.h"

Human::Human()
{

}
 
void Human::setage(int _age)
{
	age = _age;
}

int Human::getage()
{
	return age;
}

std::string Human::getfirstname()
{
	return firstname;
}

void Human::setfirstname(std::string _first)
{
	firstname = _first;
}

std::string Human::getlastname()
{
	return lastname;
}

void Human::setlastname(std::string _last)
{
	lastname = _last;
}

std::string Human::getfullname()
{
	return firstname + " " + lastname;
}