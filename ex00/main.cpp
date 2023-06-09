#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* wrongani = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << wrongani->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	wrongani->makeSound();
	wrongcat->makeSound();

	return 0;
}