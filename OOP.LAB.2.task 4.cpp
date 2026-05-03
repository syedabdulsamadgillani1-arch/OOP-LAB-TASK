#include <iostream>
using namespace std;

class Temperature {
public:
    float celsius; 
    
    float toFahrenheit() {
        return (celsius * 9.0/5.0) + 32;
    }
    
    void displayConverted() {
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Fahrenheit: " << toFahrenheit() << " F" << endl;
    }
};

int main() {
    Temperature temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp.celsius;
    
    temp.displayConverted();
    return 0;
