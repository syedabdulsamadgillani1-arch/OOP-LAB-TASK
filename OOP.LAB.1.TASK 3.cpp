#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;
    
    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    
    Student *ptr = new Student; 
    
    cout << "Enter First Name: ";
    cin >> ptr->firstName;
    cout << "Enter Last Name: ";
    cin >> ptr->lastName;
    cout << "Enter Roll Number: ";
    cin >> ptr->rollNumber;
    cout << "Enter Marks: ";
    cin >> ptr->marks;
    
    cout << "\n=== Student Information ===" << endl;
    
    ptr->displayStudentInfo();
    
    delete ptr; 
    return 0;
}
