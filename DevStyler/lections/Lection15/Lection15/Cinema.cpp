#include "Cinema.h"
#include <vector>


Cinema::Cinema(string name, string address, vector<Hall> halls) {
	setName(name);
	setAddress(address);
	setHallsList(halls);
}

void Cinema::setName(string name) {
	this->name = name;
}

string Cinema::getName() {
	return this->name;
}

void Cinema::setAddress(string address) {
	this->address = address;
}
	
string Cinema::getAddress() {
	return this->address;
}

void Cinema::setHallsList(vector<Hall> halls) {
	this->hallsList = halls;
}

vector<Hall> Cinema::getHallsList() {
	return this->hallsList;
}

void Cinema::addHall(Hall hall) {
	this->hallsList.push_back(hall);
}

void Cinema::print() {
	cout << "Cinema name " << getName() << ". The address is " << getAddress << "." << endl;
	for (int i = 0; i < hallsList.size(); i++) {
		hallsList.at(i).print();
	}
}
