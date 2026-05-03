#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {
        cout << "Vehicle constructor: " << brand << endl;
    }
};

class Car : public Vehicle {
protected:
    int seats;
public:
    Car(string b, int s) : Vehicle(b), seats(s) {
        cout << "Car constructor: " << seats << " seats" << endl;
    }
};

class ElectricCar : public Car {
    int batteryCapacity;
public:
    ElectricCar(string b, int s, int bc) : Car(b, s), batteryCapacity(bc) {
        cout << "ElectricCar constructor: " << batteryCapacity << " kWh battery" << endl;
    }

    void display() {
        cout << "\nFinal Specs -> Brand: " << brand 
             << ", Seats: " << seats 
             << ", Battery: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar tesla("Tesla Model 3", 5, 75);
    tesla.display();
    return 0;
}
