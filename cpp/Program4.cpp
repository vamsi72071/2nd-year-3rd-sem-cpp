#include <iostream>
using namespace std;
// Inline function to calculate square
inline int square(int x) {
    return x * x;
}
// Inline function to calculate cube
inline int cube(int x) {
    return x * x * x;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square of " << num << " = " << square(num) << endl;
    cout << "Cube of " << num << " = " << cube(num) << endl;
    return 0;
}

