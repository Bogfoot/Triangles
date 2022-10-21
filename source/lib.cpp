#include "lib.hpp"

library::library(std::string _name, int _ID)
{
	name = _name;
	ID = _ID;
	std::cout << "The name of the book is: "<< _name << std::endl << "ID: "<< _ID << std::endl;
}
