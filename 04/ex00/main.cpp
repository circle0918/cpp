#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	const WrongAnimal* wAnimal = new WrongAnimal();
	const WrongAnimal* wCat = new WrongCat();
	const WrongCat* wCatcat = new WrongCat();
	wAnimal->makeSound();
	wCat->makeSound();
	wCatcat->makeSound();
	delete meta;
	delete i;
	delete j;
	delete wCat;
	delete wAnimal;
	return 0;
}