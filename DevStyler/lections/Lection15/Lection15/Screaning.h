#ifndef SCREANING_H
#define SCREANING_H
#include <string>
using namespace std;

class Screaning {
public:
	Screaning(string, int);
	void setMovieName(string);
	void setSoldTickets(int);
	string getMovieName();
	int getSoldTickets();
	void print();
private:
	string movieName;
	int soldTickets;
};

#endif //SCREANING_H