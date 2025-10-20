#include <iostream>
using namespace std;
int factorial(int num) 
{
    if (num<= 1)
        return 1;               
    else
        return num * factorial(num - 1);  
}
int main() 
{
int n;
    cout << "Enter a number: "<<endl;
    cin >> n;
    if(n<0) 
{
    cout<<"Enter a positive number"<<endl; 
 } 
    else 
{
    cout << "Factorial   of "<<n<<"is" << factorial(n);
}
    return 0;
}

