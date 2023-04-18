#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& assign);
		~Brain();
		void getIdeas();
		void setIdeas(int i, std::string idea);
};

#endif