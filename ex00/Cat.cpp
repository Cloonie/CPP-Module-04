#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& assign)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	this->type = assign.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat goes MEOW!" << std::endl;
}

std::string Cat::getType() const
{
	return (type);
}