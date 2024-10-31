// Arrays and pointer arithmetic

#include <iostream>
using namespace std;

int main()
{
    // ******Array Example******
    int i = 0;
    int marks[] = {25, 34, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 178;
    mathMarks[1] = 578;
    mathMarks[2] = 378;
    mathMarks[3] = 478;

    // cout<<"These are math marks:"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    // cout<<"\nThese are marks:"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // ******Arrays with loops******
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }
    
    // Quick quiz ---> Do the same sing while and do-while
    // while (i < 4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    
    // do{
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }while (i < 4);

    // ******Pointers and Arrays******
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *(p) is "<<*(p)<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    
    return 0;
}
