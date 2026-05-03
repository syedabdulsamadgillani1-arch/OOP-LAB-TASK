#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
    
public:
    Rectangle() {
        length = 1.0;
        width = 1.0;
        cout << "Default constructor called" << endl;
    }
    
    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called" << endl;
    }
    
     Rectangle(float side) {
        length = side;
        width = side;
        cout << "Single-parameter constructor called" << endl;
    }
    
    float area() {
        return length * width;
    }
    
    void display() {
        cout << "Length: " << length << ", Width: " << width;
        cout << ", Area: " << area() << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Rectangle r1;           
    Rectangle r2(5.5, 3.2); 
    Rectangle r3(4.0);    
    
    cout << "\n=== Rectangle Details ===" << endl;
    r1.display();
    r2.display();
    r3.display();
    
    return 0;
}
