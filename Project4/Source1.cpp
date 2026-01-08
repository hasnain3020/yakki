//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//    virtual void draw() {
//        cout << "Drawing a generic shape" << endl;
//    }
//};
//
//class Circle : public Shape {
//public:
//    void draw() override {
//        cout << "Drawing a Circle" << endl;
//    }
//};
//
//class Square : public Shape {
//public:
//    void draw() override {
//        cout << "Drawing a Square" << endl;
//    }
//};
//
//int main() {
//    Shape* shapePtr;
//
//    Circle circle;
//    Square square;
//
//    shapePtr = &circle;
//    shapePtr->draw();
//
//    shapePtr = &square;
//    shapePtr->draw();
//
//    return 0;
//}