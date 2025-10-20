#include <iostream>
using namespace std;
int salary = 30000;  // Global salary
namespace HR {
    int salary = 45000;  // HR department salary
}
namespace IT {
    int salary = 60000;  // IT department salary
}
int main() {
    int salary = 40000;  // Local salary for the employee
    cout << "Employee's current salary: " << salary << endl;
    cout <<"Company base salary(Global):" << ::salary << endl;
    cout << "HR Department salary: " << HR::salary << endl;
    cout << "IT Department salary: " << IT::salary << endl;
    return 0;
}

