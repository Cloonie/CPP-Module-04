#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) :  WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& assign)
{
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	this->type = assign.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat goes MEOW!" << std::endl;
}

std::string WrongCat::getType() const
{
	return (type);
}