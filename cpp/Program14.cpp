#include <iostream>
using namespace std;
class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object created!" << endl;
    }
    // Destructor
    ~Demo() {
        cout << "Destructor called: Object destroyed!" << endl;
    }
};
int main() {
    cout << "Creating object obj1..." << endl;
    Demo obj1;
    cout << "Creating object obj2..." << endl;
    Demo obj2;
    cout << "Exiting main function..." << endl;
    return 0;
}#include <iostream>
using namespace std;
class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object created!" << endl;
    }
    // Destructor
    ~Demo() {
        cout << "Destructor called: Object destroyed!" << endl;
    }
};
int main() {
    cout << "Creating object obj1..." << endl;
    Demo obj1;
    cout << "Creating object obj2..." << endl;
    Demo obj2;
    cout << "Exiting main function..." << endl;
    return 0;
}
