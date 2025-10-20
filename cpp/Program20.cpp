#include <iostream>
using namespace std;
class Teacher {
public:
    void teach() {
        cout << "Teacher teaches subjects." << endl;
    }
};
class Researcher {
public:
    void research() {
        cout << "Researcher does research." << endl;
    }
};
class Professor : public Teacher, public Researcher {
public:
    void guide() {
        cout << "Professor guides students." << endl;
    }
};
int main() {
    Professor p;
    p.teach();
    p.research();
    p.guide();
    return 0;
}
