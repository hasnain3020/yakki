//#include <iostream>
//using namespace std;
//class Animal {
//public:
//    virtual void sound() {
//        cout << "The animal makes a sound." << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void sound() override {
//        cout << "Bark!" << endl;
//    }
//};
//
//class Cat : public Animal {
//public:
//    void sound() override {
//        cout << "Meow!" << endl;
//    }
//};
//
//int main() {
//    Animal* dog = new Dog();
//    Animal* cat = new Cat();
//    dog->sound(); 
//    cat->sound(); 
//    delete dog;
//    delete cat;
//    return 0;
//}