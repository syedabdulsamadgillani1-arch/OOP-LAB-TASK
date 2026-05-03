#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;
    
public:
    void setDimensions(); 
    int area();             
    int perimeter();      
};


void Rectangle::setDimensions() {
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle rect; 
    rect.setDimensions();
    
    cout << "\n=== Rectangle Results ===" << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    
    return 0;
}
