// # ifndef CPPCLASSES_CAR_H
// # define CPPCLASSES_CAR_H
// # include <string>
// # include <iostream>
// using namespace std;

// class Car{
// public:
//     Car(string, int, string, string, string, string, string);
//     void setYear(int);
//     int getYear();
//     void setModel(string);
//     string getModel();
//     void display_message();
// private:
//     string model;
//     int year;
//     string color;
//     string fuel;
//     string vin;
//     string transmition;
//     string plate;
// };


// # endif // CPPCLASSES_CAR_H


#ifndef CPPCLASSES_CAR_H
#define CPPCLASSES_CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    Car(string, int, string, string, string, string, string);
    void setModel(string);
    string getModel();
    void setYear(int);
    setColor(string);
    setFuel(string);
    setTransmission(string);
    setPlate(string);
    setVin(string);
    void displayMessage();
    void inputData();

private:
    string model;
    int year;
    string color;
    string fuel;
    string vin;
    string transmission;
    string plate;
};

#endif //CPPCLASSES_CAR_H