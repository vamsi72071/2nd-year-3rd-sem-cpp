#include<iostream>
using namespace std;
// Function to swap two values using references
void swapValues(int &first, int &second)
 {
    int temp = first;
    first = second;
    second = temp;
}
int main() 
{
    int num1, num2;
    cout << "Enter the values of num1 and num2: ";
    cin >> num1 >> num2;
    cout << "\nValues before swapping:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    // Call to function to swap the numbers
    swapValues(num1, num2);
    cout << "\nValues after swapping:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    return 0;
}

