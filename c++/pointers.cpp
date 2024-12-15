// #include<iostream>
// using namespace std;

// int main(){
//     // what is pointer --> is data type which hold the address of other data type
//     int a=3;
//     int *b=&a;

//  // & ---> (Address of) Operator
//     cout<<"The address of a is "<<&a<<endl;
//     cout<<"The address of a is "<<b<<endl;

//     // * ---> (value at) Dereference operator
//     cout<<"The value at address b is "<<*b<<endl;


//     // Pointer to pointer
//     int** c = &b;
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The address of b is "<<c<<endl; 
//     cout<<"The value at address c is "<<*c<<endl; 
//     cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // Quick quiz: do the same using while and do-while loops?

    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
    return 0;
}


