// # include <lection13car.h>
// # include <string>
// # include <iostream>
// using namespace std;

// class Car{
// // By convention, the order of placing things in the class is: public -> protected -> private.
// public:
//     // The following is a constructor. Used only once for each instance, during its initialization.
//     // If we would like to change the values of the attributes, later on, the setters should be used. 
//     Car::Car(string model, int year, string color, string fuel, string vin, string transmition, string plate){
//         this -> model = model;
//         setYear(year); // By using the setter, we enforce the validation, made in it
//         this -> color = color;
//         this -> fuel = fuel;
//         this -> vin = vin;
//         this -> transmition = transmition;
//         this -> plate = plate;
//     }

//     // Getter and setter in cpp and proper place for validations
//      void Car::setYear(int year){
//         if (year > 1970 && year < 2023){
//         this -> year = year;
//         } else {
//             cout << " Invalid year!" << endl;
//         }
//     }
//     int Car::getYear(){
//         return year;
//     }

//     void Car::setModel(string model){
//         this -> model = model;
//     }
//     string Car::getModel(){
//         return model;
//     }
    
//     void Car::display_message(){
//         cout << "Model is: " << model << endl;
//         cout << "Year is:" << year << endl;
//         cout << "color is: " << color << endl;
//         cout << "fuel type is: " << fuel << endl;
//         cout << "vin is: " << vin << endl;
//         cout << "transmition is: " << transmition << endl;
//         cout << "The number plate is: " << plate << endl;
//     }
// private:
//     string model;
//     int year;
//     string color;
//     string fuel;
//     string vin;
//     string transmition;
//     string plate;
// };



#include "Car.h"


Car::Car(string model, int year, string color, string fuel, string vin, string transmission, string plate) {
    setModel(model);
    setYear(year);
    this->color = color;
    this->fuel = fuel;
    this->vin = vin;
    this->transmission = transmission;
    this->plate = plate;
}

void Car::setModel(string model)
{
    this->model = model;
}

void Car::setYear(int year)
{
    if (year > 1970 && year < 2024) {
        this->year = year;
    } else {
        this->year = 0;
        cout << "Invalid year. Year must be between 1970 and 2024 " << endl;
    }
}

void Car::setColor(string color){
    this -> color = color;
}

void Car::setTransmission(string transmission){
    this -> transmission = transmission;
}

void Car::setVin(string vin){
    this -> vin = vin;
}

void Car::setPlate(string plate){
    this -> plate = plate;
}

void Car::setFuel(string fuel){
    this -> fuel = fuel;
}


void Car::displayMessage()
{
    cout << "model: " << this->model
         << " year: " << this->year
         << " color: " << this->color
         << " fuel: " << this->fuel
         << " vin: " << this->vin
         << " transmission: " << this->transmission
         << " plate: " << this->plate
         << endl;
}