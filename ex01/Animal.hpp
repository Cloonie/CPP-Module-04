#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
		Brain* _brain;
	public:
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
		Brain* getBrain();
		void getIdeas(void);
		void setIdea(int i, std::string idea);
};

#endif