//#include <iostream>
//using namespace std;
//class ClassB;
//class ClassA {
//private:
//    int dataA;
//public:
//    ClassA(int a) : dataA(a) {}
//    friend int sumData(const ClassA& objA, const ClassB& objB);
//};
//class ClassB {
//private:
//    int dataB;
//public:
//    ClassB(int b) : dataB(b) {}
//    friend int sumData(const ClassA& objA, const ClassB& objB);
//};
//int sumData(const ClassA& objA, const ClassB& objB) {
//    return objA.dataA + objB.dataB;
//}
//int main() {
//    ClassA objectA(10);
//    ClassB objectB(20);
//    int result = sumData(objectA, objectB);
//    cout << "The sum of the private data members is: " << result << endl;
//    return 0;
//}