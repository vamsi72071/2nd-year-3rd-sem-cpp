#include <iostream>
using namespace std;
class Grandparent {
public:
    void legacy() {
        cout << "Grandparent's legacy." << endl;
    }
};
class Parent : public Grandparent {
public:
    void guidance() {
        cout << "Parent provides guidance." << endl;
    }
};
class Child : public Parent {
public:
    void play() {
        cout << "Child plays." << endl;
    }
};
int main() {
    Child c;
    c.legacy();
    c.guidance();
    c.play();
    return 0;
}
