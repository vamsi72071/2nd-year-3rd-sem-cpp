#include <iostream>
using namespace std;
class Vehicle {
public:
    void fuel() {
        cout << "Vehicle needs fuel." << endl;
    }
};
class Car : public Vehicle {
public:
    void wheels() {
        cout << "Car has 4 wheels." << endl;
    }
};
class Bike : public Vehicle {
public:
    void helmet() {
        cout << "Bike rider wears helmet." << endl;
    }
};
int main() {
    Car c;
    Bike b;
    c.fuel();
    c.wheels();
    b.fuel();
    b.helmet();
    return 0;
}
