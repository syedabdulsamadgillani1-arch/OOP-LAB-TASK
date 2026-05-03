#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string name;
    double price;
public:
    Product(string n, double p) : name(n), price(p) {
        cout << "Product constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Price: $" << price << endl;
    }
};

class Electronics : public Product {
    int warrantyYears;
public:
    Electronics(string n, double p, int w) : Product(n, p), warrantyYears(w) {
        cout << "Electronics constructor called" << endl;
    }

    void display() {
        Product::display();
        cout << "Warranty: " << warrantyYears << " years" << endl;
    }
};

int main() {
    Electronics laptop("Dell XPS", 1299.99, 2);
    laptop.display();
    return 0;
}
