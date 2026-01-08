//#include <iostream>
//using namespace std;
//class Temperature {
//private:
//    int value;
//public:
//    Temperature(int initialValue = 0) : value(initialValue) {}
//    Temperature& operator++() {
//        ++value;
//        return *this;
//    }
//    void display() const {
//        cout << "Current temperature: " << value << "°C" << endl;
//    }
//};
//int main() {
//    Temperature temp(25);
//    cout << "Initial temperature: ";
//    temp.display();
//    ++temp;
//    cout << "After increment: ";
//    temp.display();
//    return 0;
//}