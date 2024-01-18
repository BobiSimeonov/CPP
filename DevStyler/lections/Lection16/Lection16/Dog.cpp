#include "Dog.h"

Dog::Dog(string name, string kind, int years, string bark): Animal(name, kind, years)
{
	this->bark = bark;

}

void Dog::print() {
	Animal::print();
	cout << this->bark << endl;
}
