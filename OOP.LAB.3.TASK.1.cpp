#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;
    
public:
        Product() {
        name = "Unknown";
        price = 0.0;
        quantity = 0;
    }
    
        void setName(string n) {
        if(n.empty()) {
            cout << "Error: Name cannot be empty!" << endl;
        } else {
            name = n;
        }
    }
    
    void setPrice(double p) {
        if(p <= 0) {
            cout << "Error: Price must be greater than 0!" << endl;
        } else {
            price = p;
        }
    }
    
    void setQuantity(int q) {
        if(q < 0) {
            cout << "Error: Quantity cannot be negative!" << endl;
        } else {
            quantity = q;
        }
    }
    
        string getName() {
        return name;
    }
    
    double getPrice() {
        return price;
    }
    
    int getQuantity() {
        return quantity;
    }
};

int main() {
    Product p;
    p.setName("");        
    p.setPrice(-50);      
    p.setQuantity(-2);    
    
    p.setName("Laptop");
    p.setPrice(1200.50);
    p.setQuantity(5);
    
    cout << "Product: " << p.getName() << endl;
    cout << "Price: $" << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;
    return 0;
}
