#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& assign)
{
	std::cout << "Brain copy assignment operator called." << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called." << std::endl;
}

void Brain::getIdeas()
{
	
}

void Brain::setIdeas(int i, std::string idea)
{
	
}

