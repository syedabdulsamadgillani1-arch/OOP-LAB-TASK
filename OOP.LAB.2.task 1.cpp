#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNumber;
    float marks;
    
public:
    
    void getData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    
    
    void displayData() {
        cout << "\n=== Student Record ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1; 
    s1.getData();     
    s1.displayData();
    return 0;
}
