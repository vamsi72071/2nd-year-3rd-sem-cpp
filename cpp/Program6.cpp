#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;       
    string name;
public:
    void setDetails(int r, string n) { 
        rollNo = r;
        name = n;
    }
    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Student s1;
    s1.setDetails(10, "John");   
    s1.display();
    return 0;
}

