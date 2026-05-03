#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;
    
public:
    
    Employee() {
        id = 0;
        name = "Not Assigned";
        salary = 0.0;
        cout << "Default constructor called - Employee initialized" << endl;
    }
    
    void displayDetails() {
        cout << "\n=== Employee Details ===" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    
    Employee emp1;
    
    
    emp1.displayDetails();
    return 0;
}
