// Structures, Unions & Enums

#include <iostream>

using namespace std;

typedef struct employee
{
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
} emp;

union money
{
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // m1.pounds = 100;
    // cout<<m1.pounds;

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = lunch;
    cout << (m1 == 2) << endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // emp dushyant;
    // dushyant.eId = 1;
    // dushyant.favChar = 'c';
    // dushyant.salary = 1000000;
    // cout<<"The value of dushyant.eId is "<<dushyant.eId<<endl;
    // cout<<"The value of dushyant.favChar is "<<dushyant.favChar<<endl;
    // cout<<"The value of dushyant.salary is "<<dushyant.salary<<endl;
    return 0;
}