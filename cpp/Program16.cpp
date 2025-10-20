#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
public:
    // Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
    }
    // Parameterized constructor (1 argument)
    Student(int r) {
        rollNo = r;
        name = "Not Provided";
    }
    // Parameterized constructor (2 arguments)
    Student(int r, string n) {
        rollNo = r;
        name = n; }
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;}};
int main() {
    Student s1;
    Student s2(101);
    Student s3(102, "Alice");
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
