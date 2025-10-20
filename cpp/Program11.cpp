#include <iostream>
using namespace std;
// Overloaded functions for addition
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int main() {
    cout << "Sum of two integers: " << add(10, 20) << endl;
    cout << "Sum of two doubles: " << add(5.5, 4.5) << endl;
    cout << "Sum of three integers: " << add(1, 2, 3) << endl;
    return 0;
}
