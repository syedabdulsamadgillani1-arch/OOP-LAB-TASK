#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
    
public:
    void setPersonInfo() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }
    
    void display_person_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
}

class Student : public Person {
private:
    int student_id;
    
public:
    void setStudentInfo() {
        setPersonInfo(); 
        cout << "Enter Student ID: ";
        cin >> student_id;
    }
    
    void display_student_info() {
        cout << "\n=== Student Information ===" << endl;
        display_person_info(); 
        cout << "Student ID: " << student_id << endl;
    }
}

int main() {
    Student s1;
    
    cout << "--- Enter Student Details ---" << endl;
    s1.setStudentInfo();
    
    s1.display_student_info();
    
    return 0;
}
