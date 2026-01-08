//#include <iostream>
//#include <string>
//using namespace std;
//class Parent {
//protected:
//    string familyName;
//
//public:
//    Parent(string name = "") : familyName(name) {}
//    void displayFamilyName() const {
//        cout << "Family Name: " << familyName << endl;
//    }
//};
//class Child : public Parent {
//public:
//    Child(string name = "") : Parent(name) {}
//    void displayChildFamilyName() const {
//        cout << "Child accessing: " << familyName << endl;
//    }
//};
//class GrandChild : public Child {
//public:
//    GrandChild(string name = "") : Child(name) {}
//    void displayGrandChildFamilyName() const {
//        cout << "GrandChild accessing: " << familyName << endl;
//    }
//};
//int main() {
//    GrandChild grandChild("Smith");
//    cout << "Accessing from Parent class:" << endl;
//    grandChild.displayFamilyName();
//
//    cout << "\nAccessing from Child class:" << endl;
//    grandChild.displayChildFamilyName();
//
//    cout << "\nAccessing from GrandChild class:" << endl;
//    grandChild.displayGrandChildFamilyName();
//
//    return 0;
//}