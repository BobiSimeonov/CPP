#include <iostream>
#include "Screaning.h"

Screaning::Screaning(string movieName, int tickets) {
    setMovieName(movieName);
    setSoldTickets(tickets);
}

void Screaning::setMovieName(string movieName) {
    if (movieName.length() > 5) {
        this->movieName = movieName;
    }
    else {
        this->movieName = "";
        cerr << "Movie name too short" << endl;
    }
}

void Screaning::setSoldTickets(int tickets) {
    if (tickets >= 0) {
        this->soldTickets = tickets;
    }
    else {
        this->soldTickets = 0;
    }
}

string Screaning::getMovieName() {
    return this->movieName;
}

int Screaning::getSoldTickets() {
    return this->soldTickets;
}

