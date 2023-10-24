#include <iostream>
#include <string>
using namespace std;

// Employee class
class Employee {
public:
    string name;
    int age;
    double salary;
    void getEmployeeDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayEmployeeDetails() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee employees[5]; // Array of 5 Employee objects

    cout << "Enter details of 5 employees: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        employees[i].getEmployeeDetails();
    }

    // Displaying employee details
    cout << "\nDetails of 5 employees: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        employees[i].displayEmployeeDetails();
    }

    return 0;
}
