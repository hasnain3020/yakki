#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "Unknown", int a = 0) : name(n), age(a) {}

    void display() const {
        cout << "Person Display: Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
protected:
    string grade;

public:
    Student(string n = "Unknown", int a = 0, string g = "None") : Person(n, a), grade(g) {}

    void display() const {
        cout << "Student Display: Name: " << name << ", Age: " << age
            << ", Grade: " << grade << endl;
    }
};

// Derived class: GraduateStudent
class GraduateStudent : public Student {
private:
    string researchTopic;

public:
    GraduateStudent(string n = "Unknown", int a = 0, string g = "None", string rt = "Not Assigned")
        : Student(n, a, g), researchTopic(rt) {}

    void display() const {
        cout << "GraduateStudent Display: Name: " << name << ", Age: " << age
            << ", Grade: " << grade << ", Research Topic: " << researchTopic << endl;
    }
};

// Main function
int main() {
    GraduateStudent gradStudent("Charlie", 25, "A+", "Artificial Intelligence");

    // Calling display from GraduateStudent object
    cout << "Calling display():\n";
    gradStudent.display(); // Calls GraduateStudent's display

    // Explicitly calling display from base classes
    cout << "\nCalling Person::display():\n";
    gradStudent.Person::display();

    cout << "\nCalling Student::display():\n";
    gradStudent.Student::display();

    return 0;
}
