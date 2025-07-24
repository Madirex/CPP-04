#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void testDeepCopy()
{
	std::cout << "--- Testing Deep Copy ---" << std::endl;
	Dog originalDog;
	originalDog.setIdea(0, "Chase the mailman");

	{
		Dog copiedDog = originalDog;
		std::cout << "Original Dog's idea: " << originalDog.getIdea(0) << std::endl;
		std::cout << "Copied Dog's idea: " << copiedDog.getIdea(0) << std::endl;

		std::cout << "Changing copied dog's idea..." << std::endl;
		copiedDog.setIdea(0, "Nap on the couch");

		std::cout << "Original Dog's idea is now: " << originalDog.getIdea(0) << std::endl;
		std::cout << "Copied Dog's idea is now: " << copiedDog.getIdea(0) << std::endl;
	}
	std::cout << "Original Dog's idea after copy is destroyed: " << originalDog.getIdea(0) << std::endl;
	std::cout << "-------------------------" << std::endl;
}

int main()
{
	const int arraySize = 4;
	Animal* animals[arraySize];

	std::cout << "--- Filling the array ---" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		if (i < arraySize / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "--- Deleting the array ---" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	testDeepCopy();

	return 0;
}
