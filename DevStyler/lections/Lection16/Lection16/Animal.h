#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal
{
public:
	Animal(string, string, int);
	void print();
	void setName(string);
	void setKind(string);
	void setYears(int);
	string getName();
	string getKind();
	int getYears();
private:
	string name;
	string kind;
	int years;
	string gender;
};

#endif //ANIMAL_H

