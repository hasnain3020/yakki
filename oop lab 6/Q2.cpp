//#include <iostream>
//#include <string>
//using namespace std;
//class Vehicle {
//protected:
//    string manufacturer;
//public:
//    Vehicle(string m = "") : manufacturer(m) {}
//    void setmanufacturer(string m) {
//        manufacturer = m;
//    }
//    virtual void displayInfo() const {
//        cout << "manufacturer: " << manufacturer << endl;
//    }
//};
//class Car : public Vehicle {
//protected:
//    int numDoors;
//
//public:
//    Car(string m = "", int d = 0) : Vehicle(m), numDoors(d) {}
//    void setNumDoors(int d) {
//        numDoors = d;
//    }
//    void displayInfo() const override {
//        Vehicle::displayInfo();
//        cout << "Number of Doors: " << numDoors << endl;
//    }
//};
//class SportsCar : public Car {
//private:
//    int topSpeed;
//
//public:
//    SportsCar(string m = "", int d = 0, int s = 0) : Car(m, d), topSpeed(s) {}
//    void setTopSpeed(int s) {
//        topSpeed = s;
//    }
//    void displayInfo() const override {
//        Car::displayInfo();
//        cout << "Top Speed: " << topSpeed << " km/h" << endl;
//    }
//};
//int main() {
//    SportsCar mySportsCar;
//    mySportsCar.setmanufacturer("Ferrari");
//    mySportsCar.setNumDoors(2);
//    mySportsCar.setTopSpeed(350);
//    cout << "Sports Car Details:" << endl;
//    mySportsCar.displayInfo();
//    return 0;
//}