#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <iostream>


class Dog: public Animal
{
public:
	Dog(string, string, int, string);
	void setBard(string);
	string getBark();
	void print();
private:
	string bark;
};

#endif // DOG_H

