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
     void displayDetails() {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
class car :Vehicle {
    int numofdoors = 4;
    displayDetails() {
        
    }
};