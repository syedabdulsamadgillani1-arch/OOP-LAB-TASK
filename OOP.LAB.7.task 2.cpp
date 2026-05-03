#include <iostream>
#include <string>
using namespace std;
class Calculator {
public:
    double add(double a, double b) {
        double result = a + b;
        cout << "Calculating: " << a << " + " << b << " = " << result << endl;
        return result;
    }
    
    double multiply(double a, double b) {
        double result = a * b;
        cout << "Calculating: " << a << " * " << b << " = " << result << endl;
        return result;
    }
};
class Student {
private:
    string name;
    Calculator* calc; 
    
public:
    Student(string n, Calculator* c) {
        name = n;
        calc = c; 
    }
    
    void solveAddition(double a, double b) {
        cout << name << " is solving addition..." << endl;
        double result = calc->add(a, b); 
        cout << name << " got result: " << result << endl;
    }
    
    void solveMultiplication(double a, double b) {
        cout << name << " is solving multiplication..." << endl;
        double result = calc->multiply(a, b); 
        cout << name << " got result: " << result << endl;
    }
};

int main() {
    Calculator sharedCalc;
    cout << "=== Teacher provided shared calculator ===" << endl;
    Student s1("Ali", &sharedCalc);
    Student s2("Sara", &sharedCalc);
    Student s3("Ahmed", &sharedCalc);
    
    cout << "\n--- Student 1 ---" << endl;
    s1.solveAddition(10, 20);
    
    cout << "\n--- Student 2 ---" << endl;
    s2.solveMultiplication(5, 6);
    
    cout << "\n--- Student 3 ---" << endl;
    s3.solveAddition(100, 50);
    cout << "\n=== Students left, calculator still exists ===" << endl;
    sharedCalc.add(1, 1); 
    
    return 0;
}
