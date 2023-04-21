#include "Brain.hpp"
#include <cstring>

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain& Brain::operator=(const Brain& assign)
{
	std::cout << "Brain copy assignment operator called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = assign._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called." << std::endl;
}

void Brain::getIdeas(void)
{
	for (int i = 0; i < 100; i++)
		if (!_ideas[i].empty())
			std::cout << _ideas[i] << std::endl;
}

void Brain::setIdea(int i, std::string idea)
{
	if (i >= 100)
		return ;
	_ideas[i] = idea;
}

