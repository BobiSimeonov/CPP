#ifndef HALL_H
#define HALL_H
#include <string>
#include <vector>
#include "Screaning.h"
using namespace std;

class Hall {
public:
	Hall(string, int);
	Hall(string, int, vector<Screaning>);
	void setScreaningList(vector<Screaning>);
	vector<Screaning> getScreaningList();
	void addScreaning(Screaning);
	void setName(string);
	void setSeats(int);
	void print();

private:
	string name;
	int seats;
	vector<Screaning> screaningList;
};

#endif //HALL_H
