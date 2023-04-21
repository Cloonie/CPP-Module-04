#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called." << std::endl;
	type = "Animal";
	_brain = new Brain();
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& assign)
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this != &assign)
	{
		delete _brain;
		type = assign.type;
		_brain = new Brain(*assign._brain);
	}
	return (*this);
}

Animal::~Animal()
{
	delete _brain;
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

Brain* Animal::getBrain()
{
	return (_brain); 
}

void Animal::getIdeas(void)
{
	_brain->getIdeas();
}

void Animal::setIdea(int i, std::string idea)
{
	_brain->setIdea(i, idea);
}