#include <iostream>
using namespace std;
class Animal {
public:
    Animal() { cout << "Animal constructor called." << endl; }
    virtual ~Animal() { cout << "Animal destructor called." << endl; }
    void sound() { cout << "Animal sound" << endl; }
};
class Mammal : virtual public Animal {
public:
    Mammal() { cout << "Mammal constructor called." << endl; }
    ~Mammal() { cout << "Mammal destructor called." << endl; }
};
class WingedAnimal : virtual public Animal {
public:
    WingedAnimal() { cout << "WingedAnimal constructor called." << endl; }
    ~WingedAnimal() { cout << "WingedAnimal destructor called." << endl; }
};
class Bat : public Mammal, public WingedAnimal {
public:
    Bat() { cout << "Bat constructor called." << endl; }
    ~Bat() { cout << "Bat destructor called." << endl; }
};
int main() {
    cout << "Creating Bat object:\n";
    Bat b;
    cout << "\nCalling sound() function from Bat object to Animal class:\n";
    b.sound();
    cout << "\nEnd of main\n";
    return 0;
}
