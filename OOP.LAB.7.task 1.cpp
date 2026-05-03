#include <iostream>
using namespace std;
class Display {
private:
    double lastResult;
    
public:
    Display() {
        lastResult = 0.0;
    }
    
    void showResult(double result) {
        lastResult = result;
        cout << "Display: " << result << endl;
    }
    
    double getLastResult() {
        return lastResult;
    }
}
class Calculator {
private:
    Display display; 
    
public:
    void add(double a, double b) {
        double result = a + b;
        cout << a << " + " << b << " = ";
        display.showResult(result); 
    }
    
    void multiply(double a, double b) {
        double result = a * b;
        cout << a << " * " << b << " = ";
        display.showResult(result); 
    }
    
    void showLastResult() {
        cout << "Last result shown: " << display.getLastResult() << endl;
    }
};

int main() {
    Calculator calc;
    
    cout << "=== Calculator Operations ===" << endl;
    calc.add(15.5, 4.5);
    calc.multiply(7, 8);
    calc.add(100, 200);
    
    cout << "\n";
    calc.showLastResult();
    
    return 0;
}
