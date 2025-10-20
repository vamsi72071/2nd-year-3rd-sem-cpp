#include <iostream>
using namespace std;	
class Employee {
private:
    int id;
    string name;
public:
    void setDetails(int id, string name) {
        this->id = id;
        this->name = name;
    }
    Employee* getSelf() {
        return this;
    }
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Employee e1;
    e1.setDetails(101, "Alice");
    Employee* ptr = e1.getSelf();
    ptr->display();
    return 0;
}

