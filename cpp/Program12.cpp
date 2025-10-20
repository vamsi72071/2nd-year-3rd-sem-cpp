#include <iostream>
using namespace std;
// Function with default arguments
void displayDetails(string name, int age = 18, string city = "Unknown") {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "-----------------" << endl;
}
int main() {
    displayDetails("Alice", 25, "New York");
    displayDetails("Bob", 30);
    displayDetails("Charlie");
    return 0;
}
