//#include <iostream>
//using namespace std;
//class Rectangle {
//private:
//    int length;
//    int width;
//public:
//    Rectangle(int l = 0, int w = 0) : length(l), width(w) {}
//    bool operator==(const Rectangle& other) const {
//        return (length == other.length && width == other.width);
//    }
//    void display() const {
//        cout << "Length: " << length << ", Width: " << width << endl;
//    }
//};
//int main() {
//    Rectangle rect1(10, 20);
//    Rectangle rect2(10, 20);
//    cout << "Rectangle 1 dimensions: ";
//    rect1.display();
//    cout << "Rectangle 2 dimensions: ";
//    rect2.display();
//    if (rect1 == rect2) {
//        cout << "The rectangles are equal." << endl;
//    }
//    else {
//        cout << "The rectangles are not equal." << endl;
//    }
//    return 0;
//}