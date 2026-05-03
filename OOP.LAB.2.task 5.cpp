#include <iostream>
using namespace std;

class Calculator {
    float num1, num2;
    
public:
    void setNumbers();
    float add();
    float subtract();
    float multiply();
    float divide();
};

void Calculator::setNumbers() {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
}

float Calculator::add() {
    return num1 + num2;
}

float Calculator::subtract() {
    return num1 - num2;
}

float Calculator::multiply() {
    return num1 * num2;
}

float Calculator::divide() {
    if(num2 == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return num1 / num2;
}

int main() {
    Calculator calc;
    calc.setNumbers();
    
    int choice;
    cout << "\nChoose operation:" << endl;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;
    
    switch(choice) {
        case 1: cout << "Result: " << calc.add() << endl; break;
        case 2: cout << "Result: " << calc.subtract() << endl; break;
        case 3: cout << "Result: " << calc.multiply() << endl; break;
        case 4: cout << "Result: " << calc.divide() << endl; break;
        default: cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
