// Constants, Manipulators & Operator Precedence

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34;
    // char c = 'd';
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // c = '8';
    // cout<<"The value of a is: "<<a<<endl;

    // Constants in C++
    // const float a = 3.4;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 4.5;  // You will get an error, because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    // Manipulators
    // int a = 3, b = 60, c = 1200;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // Operator Precedence
    int a = 3, b = 4;
    // int c = (a * 5) + b;
    int c =((((a*5)+b)-45)+90);
    cout<<c;
    return 0;
}