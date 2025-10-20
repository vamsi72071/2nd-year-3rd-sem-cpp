#include <iostream>
using namespace std;
class Person {
public:
    void info() {
        cout << "I am a person." << endl;
    }
};
class Student : public Person {
public:
    void study() {
        cout << "Student studies." << endl;
    }
};
class Employee {
public:
    void work() {
        cout << "Employee works." << endl;
    }
};
class WorkingStudent : public Student, public Employee {
public:
    void manage() {
        cout << "Working student manages both study and work." << endl;
    }
};
int main() {
    WorkingStudent ws;
    ws.info();
    ws.study();
    ws.work();
    ws.manage();
    return 0;
}
