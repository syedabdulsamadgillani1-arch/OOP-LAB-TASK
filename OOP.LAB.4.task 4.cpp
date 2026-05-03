#include <iostream>
using namespace std;

class Locker {
public:
       Locker() {
        cout << "Locker allocated to customer." << endl;
    }
    
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
}

int main() {
    cout << "=== Stack Object Example ===" << endl;
    {
        Locker l1;
        cout << "Inside block - locker is in use" << endl;
    } 
    
    cout << "\n=== Heap Object Example ===" << endl;
    Locker* l2 = new Locker(); 
    cout << "Heap locker is in use" << endl;
    delete l2; 
    
    cout << "\nProgram ending..." << endl;
    return 0;
}
