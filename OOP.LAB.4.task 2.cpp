#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;
    
public:
    BankAccount(string accNum, string holder, double bal) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = bal;
        cout << "Account created successfully!" << endl;
    }
    
    void showAccountDetails() {
        cout << "\n=== Bank Account Details ===" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    /
    BankAccount acc1("PK0309800780100", "Muhammad Awais", 10000);
    
    acc1.showAccountDetails();
    
    string num, name;
    double bal;
    cout << "\nEnter Account Number: ";
    cin >> num;
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Balance: ";
    cin >> bal;
    
    BankAccount acc2(num, name, bal);
    acc2.showAccountDetails();
    
    return 0;
}
