#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int employeeID;

public:
    Employee(string n = "", int id = 0) : name(n), employeeID(id) {}
    void setEmployeeDetails(string n, int id) {
        name = n;
        employeeID = id;
    }
    void displayEmployeeInfo() const {
        cout << "Name: " << name << "\nEmployee ID: " << employeeID << endl;
    }
};
class Manager : public Employee {
protected:
    string department;

public:
    Manager(string n = "", int id = 0, string dept = "") : Employee(n, id), department(dept) {}
    void setDepartment(string dept) {
        department = dept;
    }
    void displayManagerInfo() const {
        displayEmployeeInfo();
        cout << "Department: " << department << endl;
    }
};
class ProjectManager : public Manager {
private:
    string projectName;

public:
    ProjectManager(string n = "", int id = 0, string dept = "", string proj = "")
        : Manager(n, id, dept), projectName(proj) {}
    void setProjectName(string proj) {
        projectName = proj;
    }
    void displayProjectManagerInfo() const {
        displayManagerInfo();
        cout << "project name: " << projectName << endl;
    }
};
int main() {
    ProjectManager pm;
    pm.setEmployeeDetails("husnain", 10234);
    pm.setDepartment("IT");
    pm.setProjectName("AI Development");
    cout << "Project Manager Details:" << endl;
    pm.displayProjectManagerInfo();

    return 0;
}