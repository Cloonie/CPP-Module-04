#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called." << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& assign)
{
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	this->type = assign.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor called." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Random WrongAnimal noises." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
