#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    double salary;
    
public:
    void setEmployeeData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore(); 
    }
    
    void display_employee() {
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
}

class Developer : public Employee {
private:
    string programming_language;
    
public:
    void setDeveloperData() {
        setEmployeeData()
        cout << "Enter Programming Language: ";
        getline(cin, programming_language);
    }
    
    void display_developer() {
        cout << "\n=== Developer Information ===" << endl;
        display_employee(); 
        cout << "Programming Language: " << programming_language << endl;
    }
}
class Designer : public Employee {
private:
    string design_tool;
    
public:
    void setDesignerData() {
        setEmployeeData();
        cout << "Enter Design Tool: ";
        getline(cin, design_tool);
    }
    
    void display_designer() {
        cout << "\n=== Designer Information ===" << endl;
        display_employee(); 
        cout << "Design Tool: " << design_tool << endl;
    }
};

int main() {
    Developer dev1;
    Designer des1;
    
    cout << "--- Enter Developer Details ---" << endl;
    dev1.setDeveloperData();
    
    cout << "\n--- Enter Designer Details ---" << endl;
    des1.setDesignerData();
           dev1.display_developer();
    des1.display_designer();
    
    return 0;
}
