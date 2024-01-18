#include <iostream>
#include <vectors>
#include "Dog.h"

int main() {
	Animal* animalPtr = nullptr;
	Dog doggy("Barcho", "Terier", 4, "bau");
	animalPtr = &doggy;	// Creates a pointer to an already existing object. The "&" instructs the compilator to return the address of "doggy" and not the objects itself

	Dog *dogPtr = nullptr;
	dogPtr = new Dog("Rasel", "Pitbull", 5, "BAf");	// creates an instance f Dog, however "New" instructs to return the address of the object, not the object itself 

	// "dogPtr ->"   is the same for pointers as "dog."  for normal variables

	vector<Animal *> animals;	// The star sign shows that the vector will contain POINTERS to Animal (or child classes) objects. Cant add an object in this vector On this case, even if we add Dog objects, the vector remembers only the Animals attributes and methods
	animals.push_back(dogPtr);

	return 0;
}
//SDL