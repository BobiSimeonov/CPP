// # include <iostream>
// # include <string>
// # include "lection13car.h"

// using namespace std;




// int main(){
//     string model = "";
//     Car first_car("citroen", 1991, "red", "Diezel", "124522544112", "manual", "BB1412PD");
//     cout << "Enter car model: ";
//     cin >> model;
//     first_car.setModel(model);
//     string carModel = first_car.getModel();
//     cout << "Car model is: " << carModel << endl;
//     first_car.display_message();

//     return 0;
// }






# include <vector>
using namespace std;

#include "Car.h"
#include "carService.h"



int main() {

    vector <Car> cars;
    CarService cs;
    for (int i = 0; i < 5; i++){
        cars.push_back(cs.inputData());
    }

    for (int i = 0; i < cars.size(); i++){
        cars[i].displayMessage();
    }
    return 0;
}