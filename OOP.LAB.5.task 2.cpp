#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
    
public:
    void setPersonData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }
    
    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
}

class Employee : public Person {
protected:
    int employee_id;
    
public:
    void setEmployeeData() {
        setPersonData();
        cout << "Enter Employee ID: ";
        cin >> employee_id;
        cin.ignore();
    }
    
    void display_employee() {
        display_person(); 
        cout << "Employee ID: " << employee_id << endl;
    }
}

class Manager : public Employee {
private:
    string department;
    
public:
    void setManagerData() {
        setEmployeeData(); 
        cout << "Enter Department: ";
        getline(cin, department);
    }
    
    void display_manager() {
        cout << "\n=== Manager Complete Information ===" << endl;
        display_employee(); 
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m1;
    
    cout << "--- Enter Manager Details ---" << endl;
    m1.setManagerData();
    
    m1.display_manager();
    
    return 0;
}
