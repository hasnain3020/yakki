#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string manufacturer;
    string model;
    int year;
public:
    Vehicle(string m, string mo, int y) {
        manufacturer = m, model = mo, year = y;
    }
    virtual void displayDetails() {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
class Car : public Vehicle {
private:
    int numberOfDoors;
public:
    Car(string m, string mo, int y, int doors) : Vehicle(m, mo, y), numberOfDoors(doors) {}
    virtual void displayDetails() override {
        Vehicle::displayDetails();
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};
class Truck : public Vehicle {
private:
    double loadCapacity;
public:
    truck(string m, string mo, int y) :vehicle(m, mo, y) {}
    double loadcapacity;
    displayDetails()override{
        Vehicle::displayDetails();
        Truck(string m, string mo, int y, double loadCap) : Vehicle(m, mo, y), loadCapacity(loadCap) {}
        void displayDetails() override {
            Vehicle::displayDetails();
        cout << "Load Capacity: " << loadCapacity << " tons" << endl;
    }
};
class Motorcycle : public Vehicle {
private:
    string type;
public:
    Motorcycle(string m, string mo, int y, string t) : Vehicle(m, mo, y), type(t) {}
    void displayDetails() override {
        Vehicle::displayDetails();
        cout << "Type: " << type << endl;
    }
};
int main() {
    Car car1("Toyota", "Camry", 2022, 4);
    Truck truck1("Ford", "F-150", 2023, 2.5);
    Motorcycle moto1("BMW", "Sportster", 2024, "Cruiser");
    cout << "Car Details:" << endl;
    car1.displayDetails();
    cout << endl;
    cout << "Truck Details:" << endl;
    truck1.displayDetails();
    cout << endl;
    cout << "Motorcycle Details:" << endl;
    moto1.displayDetails();
    return 0;
}