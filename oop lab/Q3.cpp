#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string grade;

public:
    Student(string n, int a, string g) : Person(n, a), grade(g) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Grade: " << grade << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string s) : Person(n, a), subject(s) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Subject: " << subject << endl;
    }
};

class Club {
protected:
    string name;

public:
    Club(string n) : name(n) {}

    void displayInfo() {
        cout << "Club Name: " << name << endl;
    }
};

class SportsClub : public Club {
private:
    string sport;

public:
    SportsClub(string n, string s) : Club(n), sport(s) {}

    void displayInfo() {
        Club::displayInfo();
        cout << "Sport: " << sport << endl;
    }
};

int main() {
    Student student("Imad", 20, "A+");
    Teacher teacher("Mary", 30, "Mathematics");
    student.displayInfo();
    teacher.displayInfo();
    SportsClub sportsClub("Football Club", "Football");
    sportsClub.displayInfo();
    return 0;
}