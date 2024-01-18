#include "Student.h"
#include <iostream>
# include <string>
using namespace std;

Student::Student(string name, int id)
{
	setName(name);
	setId(id);
}

void Student::setName(string name) {
	this->name = name;
}

void Student::setId(int id) {
	this->id = id;
}

string Student::getName() {
	return this->name;
}
void Student::printInfo() {
	cout << "The student's name is " << getName() << ". And is number " << getId() << endl;
}