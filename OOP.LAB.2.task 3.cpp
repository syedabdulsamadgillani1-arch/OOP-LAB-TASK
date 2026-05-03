#include <iostream>
#include <string>
using namespace std;

class Voter {
    string name;
    int age;
    
public:
    void setData();       
    bool isEligible();    
};


void Voter::setData() {
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
}

bool Voter::isEligible() {
    return age > 18; 
}

int main() {
    Voter v1;
    v1.setData();
    
    if(v1.isEligible()) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are NOT eligible to vote." << endl;
    }
    return 0;
}
