//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//    virtual void displayShape() {
//        cout << "This is a shape." << endl;
//    }
//};
//
//class Circle : public Shape {
//public:
//    void displayShape() override {
//        cout << "This is a Circle." << endl;
//    }
//};
//
//class Rectangle : public Shape {
//public:
//    void displayShape() override {
//        cout << "This is a Rectangle." << endl;
//    }
//};
//
//int main() {
//    Shape* shape1 = new Circle();
//    Shape* shape2 = new Rectangle();
//    shape1->displayShape();
//    shape2->displayShape();
//    delete shape1;
//    delete shape2;
//    return 0;
//}