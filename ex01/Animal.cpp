#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called." << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& assign)
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	this->type = assign.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Random animal noises." << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
