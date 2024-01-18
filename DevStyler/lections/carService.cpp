# include "CarService.h"
# include "Car.h"


Car CarService::inputData(){
        string model = "";
        int year = 0;
        string color = "";
        string fuel = "";
        string vin = "";
        string transmission = "";
        string plate = "";
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter color: ";
        cin >> color;
        cout << "Enter fuel: ";
        cin >> fuel;
        cout << "Enter vin: ";
        cin >> vin;
        cout << "Enter transmition: ";
        cin >> transmission;
        cout << "Enter plate: ";
        cin >> plate;
        Car myCar(model, year, color, fuel, vin, transmission, plate);
        return myCar;
}