#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//test for compile error :
	// Animal k;
	// k.makeSound();

	//default tests :
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	// my tests :
	Animal *animal[10];
	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
		{
			animal[i] = new Dog();
			std::cout << "My type is " << animal[i]->getType() << std::endl;
			animal[i]->makeSound();
			Dog* dog = static_cast<Dog *>(animal[i]);
			if (dog == 0)
				std::cout << "error cast " << std::endl;
			dog->getBrain().setIdeas(0, "idea 0");
			dog->getBrain().printIdeas(0);
			delete animal[i];
		}
		else
		{
			animal[i] = new Cat();
			std::cout << "My type is " << animal[i]->getType() << std::endl;
			animal[i]->makeSound();
			delete animal[i];
		}
		
	}
	return 0;
}
