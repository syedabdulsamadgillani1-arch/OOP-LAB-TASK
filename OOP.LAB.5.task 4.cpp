#include <iostream>
#include <string>
using namespace std;
class Printer {
public:
    void print_document(string doc) {
        cout << "Printing Document: " << doc << endl;
        cout << "Print completed successfully!" << endl;
    }
};

class Scanner {
public:
    void scan_document(string doc) {
        cout << "Scanning Document: " << doc << endl;
        cout << "Scan completed successfully!" << endl;
    }
};
class Photocopier : public Printer, public Scanner {
public:
    void photocopy(string doc) {
        cout << "\n=== Starting Photocopy Process ===" << endl;
        scan_document(doc);  
        print_document(doc); 
        cout << "Photocopy completed!" << endl;
        cout << "================================" << endl;
    }
};

int main() {
    Photocopier pc;
    string document = "OOP_Assignment.pdf";
    
    cout << "--- Individual Functions ---" << endl;
    pc.print_document(document);
    cout << endl;
    pc.scan_document(document);
    
    cout << "\n--- Combined Function ---" << endl;
    pc.photocopy(document);
    
    return 0;
