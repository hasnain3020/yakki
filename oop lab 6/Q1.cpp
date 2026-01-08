//#include <iostream>
//#include <string>
//using namespace std;
//class Person {
//protected:
//    string name;
//    int age;
//
//public:
//    Person(string n = "", int a = 0) : name(n), age(a) {}
//    void setPersonDetails(string n, int a) {
//        name = n;
//        age = a;
//    }
//    void displayPersonDetails() const {
//        cout << "Name: " << name << "\nAge: " << age << endl;
//    }
//};
//class Student : public Person {
//protected:
//    int studentID;
//    string course;
//
//public:
//    Student(string n = "", int a = 0, int id = 0, string c = "") : Person(n, a), studentID(id), course(c) {}
//    void setStudentDetails(int id, string c) {
//        studentID = id;
//        course = c;
//    }
//    void displayStudentDetails() const {
//        displayPersonDetails();
//        cout << "Student ID: " << studentID << "\nCourse: " << course << endl;
//    }
//};
//class GraduateStudent : public Student {
//private:
//    int graduationYear;
//    string thesisTopic;
//
//public:
//    GraduateStudent(string n = "", int a = 0, int id = 0, string c = "", int gy = 0, string tt = "")
//        : Student(n, a, id, c), graduationYear(gy), thesisTopic(tt) {}
//    void setGraduateStudentDetails(int gy, string tt) {
//        graduationYear = gy;
//        thesisTopic = tt;
//    }
//    void displayGraduateStudentDetails() const {
//        displayStudentDetails();
//        cout << "Graduation Year: " << graduationYear << "\nThesis Topic: " << thesisTopic << endl;
//    }
//};
//int main() {
//    GraduateStudent gradStudent;
//    gradStudent.setPersonDetails("Alice Johnson", 25);
//    gradStudent.setStudentDetails(12345, "Computer Science");
//    gradStudent.setGraduateStudentDetails(2024, "Machine Learning in Healthcare");
//    cout << "Graduate Student Details:" << endl;
//    gradStudent.displayGraduateStudentDetails();
//
//    return 0;
//}