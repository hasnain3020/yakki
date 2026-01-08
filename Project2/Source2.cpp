//#include <iostream>
//using namespace std;
//class Counter {
//private:
//    static int objectCount;
//public:
//    Counter() {
//        objectCount++;
//    }
//    ~Counter() {
//        objectCount--;
//    }
//    static int getObjectCount() {
//        return objectCount;
//    }
//};
//int Counter::objectCount = 0;
//int main() {
//    cout << "Initial object count: " << Counter::getObjectCount() << endl;
//    Counter c1;
//    Counter c2;
//    Counter c3;
//    cout << "Object count after creating 3 objects: " << Counter::getObjectCount() << endl;
//    {
//        Counter c4;
//        cout << "Object count after creating 4 objects (within a block): " << Counter::getObjectCount() << endl;
//    }
//    cout << "Object count after destroying one object: " << Counter::getObjectCount() << endl;
//    return 0;
//}