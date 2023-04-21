#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "\033[0;32m~ TESTING CREATE AND FILL ARRAY ~\033[0m" << std::endl;
	Animal* array[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	array[0]->makeSound();
	array[1]->makeSound();
	array[2]->makeSound();
	array[3]->makeSound();
	for (int i = 0; i < 4; i++)
		delete array[i];

	// testing deep copies which is making sure every variable is copied.
	std::cout << "\033[0;32m~ TESTING DEEP COPIES ~\033[0m" << std::endl;
	Animal* oldcat = new Cat();
	oldcat->setIdea(0, "oldcat Idea[0]: im going to scratch the sofa.");
	oldcat->setIdea(69, "oldcat Idea[69]: jump up the cupboard and hide.");
	oldcat->setIdea(99, "oldcat Idea[99]: meowing for food.");
	oldcat->setIdea(100, "oldcat Idea[100]: ill probably forget this idea.");
	oldcat->getIdeas();
	Animal* newcat = new Cat();
	*newcat = *oldcat;
	newcat->getIdeas();
	delete newcat;
	delete oldcat;

	// to check leaks run
	// valgrind --leak-check=yes ./a.out
	return 0;
}