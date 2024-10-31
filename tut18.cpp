#include <iostream>
using namespace std;

int fib(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return fib(n - 1) + fib(n - 2);
    }
}

// Step by step of fibonaccisequence of 5
// fib(5)
// [fib(4)] + [fib(3)]
// [fib(3) + fib(2)] + [fib(2) + fib(1)]
// [fib(2) + fib(1)] + [fib(1) + fib(0)] + [fib(1) + fib(0)] + [fib(0) + fib(-1)]
// [(1 + 0) + (0 + -1)] + [(0 + -1) + (-1 + -2)] + [(0 + -1) + (-1 + -2)] + [(-1 + -2) + (-2 + -3)] // ------> While we a condition that says if(n <= 1) ---> return 1. So,

int factorial(int n){
    if(n < 0){
        return -1;
    }
    else{

        if (n == 0 || n == 1)
        {
            return n;
        }
        else{
            return n * factorial(n - 1);
        }
    }
}

// int factorialIter(int n){
//     if(n < 0){
//         return -1;
//     }
//     else{
//         if (n == 0 || n == 1)
//         {
//             return n;
//         }
//         else{
//             for (int i = n; i > 1; i--)
//             {
//                 int f = 1;
//                 f = f * i;
//                 // return f;
//             }           
//         }
//     } 
// }

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main()
{
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 (By definition)
    // 1! = 1 (By definition)
    // n! = n * (n-1)!

    int num;
    int f = 1;
    cout<<"Enter the number you wnat factorial of:"<<endl;
    cin>>num;
    // cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;
    cout<<"The term in fibonacci sequence at position "<<num<<" is "<<fib(num)<<endl;
    return 0;
}
