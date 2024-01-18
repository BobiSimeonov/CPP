#include "Screaning.h"
#include <iostream>

Screaning::Screaning(string movieName, int tickets)
{
	setMovieName(movieName);
	this->soldTickets = tickets;
}

void Screaning::setMovieName(string movieName) {
	if (movieName.length() > 5) {
		this->movieName = movieName;
	}
	else {
		cerr << "Movie names should be longer than 4 characters." << endl;
	}
}

void Screaning::setSoldTickets(int tickets) {
	if (tickets >= 0) {
		this->soldTickets = tickets;
	}
}

string Screaning::getMovieName() {
	return this->movieName;
}

int Screaning::getSoldTickets() {
	return this->soldTickets;
}

void Screaning::print() {

}