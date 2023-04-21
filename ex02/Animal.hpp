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
		virtual ~Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		virtual void makeSound() const = 0;
		std::string getType() const;
		Brain* getBrain();
		void getIdeas(void);
		void setIdea(int i, std::string idea);
};

#endif