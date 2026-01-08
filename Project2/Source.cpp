//#include <iostream>
//using namespace std;
//class ClassB;
//class ClassA {
//private:
//    int dataA; 
//public:
//    ClassA(int value) : dataA(value) {}
//friend int sumData(const ClassA& objA, const ClassB& objB);
//};
//class ClassB {
//private:
//    int dataB; 
//public:
//    ClassB(int value) : dataB(value) {}
//    friend int sumData(const ClassA& objA, const ClassB& objB);
//};
//int sumData(const ClassA& objA, const ClassB& objB) {
//    return objA.dataA + objB.dataB;
//}
//int main() {
//    ClassA objA(10);
//    ClassB objB(20);
//    cout << "The sum of data members is: " << sumData(objA, objB) << endl;
//        return 0;
//}