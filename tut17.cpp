// Inline functions, default arguments, constant arguments and static variables

#include <iostream>
using namespace std;

// ******Inline Functions******
inline int product(int a, int b){ // Inline function replaces the function call with its(function) code
    return a*b;       
}
// Don't use Inline functions in:
// 1. Switch case statements
// 2. Static variables
// 3. Large block of code

// ******Static Variables******
// int product(int a, int b){ 
//     static int c = 0; // This executes only once
//     c = c + 1; // Next time this function is run, the value of c will be retained
//     return a*b+c;
// }

// ******Default Arguments******
float moneyRecieved(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

// ******Constant Arguments******
// int strlen(const char *p){

// }

int main()
{
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;

    int money = 100000;
    // cout<<"If you have "<<money<<" Rs. in your bank account, you will recieve "<<moneyRecieved(money)<<" Rs. after 1 year"<<endl;
    // cout<<"For VIP: If you have "<<money<<" Rs. in your bank account, you will recieve "<<moneyRecieved(money, 1.1)<<" Rs. after 1 year"<<endl;
    return 0;
}
