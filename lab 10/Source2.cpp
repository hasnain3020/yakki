//#include <iostream>
//using namespace std;
//class Matrix {
//private:
//    int a, b;
//public:
//    Matrix(int x = 0, int y = 0) {
//        a = x;
//        b = y;
//    }
//    Matrix operator+(Matrix other) {
//        Matrix temp;
//        temp.a = a + other.a;
//        temp.b = b + other.b;
//        return temp;
//    }
//    void display() {
//        cout << "[" << a << ", " << b << "]" << endl;
//    }
//};
//int main() {
//    Matrix mat1(1, 2);
//    Matrix mat2(3, 4);
//    cout << "Matrix 1: ";
//    mat1.display();
//    cout << "Matrix 2: ";
//    mat2.display();
//    Matrix result = mat1 + mat2;
//    cout << "Resultant Matrix: ";
//    result.display();
//    return 0;
//}