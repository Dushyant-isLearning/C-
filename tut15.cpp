// Functions & Function prototypes

#include <iostream>
using namespace std;

// Function prototype
// type function_name (arguments) // ---> Syntax
// int sum(int a, int b); // ---> Acceptable
// int sum(int a, b); // ---> Not Acceptable
int sum(int, int); // ---> Acceptable
void greet(void); // ---> Accceptable
void greet(); // ---> Accceptable

int main(void)
{
    int num1, num2;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    // num1 and num2 are Actual parameters
    cout << "The sum is " << sum(num1, num2);
    greet();
    return 0;
}

int sum(int a, int b)
{
    // Formal parameters a and b will be taking values from actual paramters num1 and num2
    int c = a + b;
    return c;
}

void greet(){
    cout<<"\nHello, Good Morning";
}
