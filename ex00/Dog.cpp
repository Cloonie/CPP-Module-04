#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& assign)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	this->type = assign.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog goes WOOF!" << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}
