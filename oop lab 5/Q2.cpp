#include <iostream>
#include <string>
using namespace std;
class animal {
protected:
    string name;
    int age;

public:
    animal(string n, int a) : name(n), age(a) {}

    void showdetails() const {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};
class dog : public animal {
private:
    string breed;

public:
    dog(string n, int a, string b) : animal(n, a), breed(b) {}

    Overriding showDetails()
        void showDetails() const {
        Animal::showDetails();
        cout << "breed: " << breed << endl;
    }
};

int main() {
    dog myDog("buddy", 3, "golden retriever");
    myDog.showDetails();

    return 0;
}