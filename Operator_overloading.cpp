#include <iostream>
#include <string>
using namespace std;

// Employee class
class Employee {
public:
    string name;
    int age;
    double salary;

    // Overloading the stream insertion operator for input
    friend istream& operator>>(istream& input, Employee& emp) {
        cout << "Enter name: ";
        input >> emp.name;
        cout << "Enter age: ";
        input >> emp.age;
        cout << "Enter salary: ";
        input >> emp.salary;
        return input;
    }

    // Overloading the stream extraction operator for output
    friend ostream& operator<<(ostream& output, const Employee& emp) {
        output << "Name: " << emp.name << ", Age: " << emp.age << ", Salary: " << emp.salary;
        return output;
    }
};

int main() {
    Employee employees[5]; // Array of 5 Employee objects

    cout << "Enter details of 5 employees: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        cin >> employees[i];
    }

    // Displaying employee details
    cout << "\nDetails of 5 employees: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << ": " << employees[i] << endl;
    }

    return 0;
}
