#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& assign);
		~Brain();
		void getIdeas(void);
		void setIdea(int i, std::string idea);
};

#endif