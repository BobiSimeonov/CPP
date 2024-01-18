#ifndef CINEMA_H
#define CINEMA_H
#include <iostream>
#include <string>
#include <vector>
#include "Hall.h"
using namespace std;

class Cinema {
public:
	Cinema(string, string, vector<Hall>);
	void setName(string);
	string getName();
	void setAddress(string);
	string getAddress();
	void setHallsList(vector<Hall>);
	vector<Hall> getHallsList();
	void addHall(Hall);
	void addVectorOfHallsToList(vector<Hall>);
	void print();

private:
	string name;
	string address;
	vector<string> hallsList;
};
#endif //CINEMA_H

