

#include<iostream>
using namespace std;

// class complex 
// {
//     private:
//     int r, i;

//     public:
//     void getdata()
//     {
//         cout<<"enter the number";
//         cin>>r>>i;
//     }
//     void putdata()
//     {
//         cout<<"+i"<<i<<endl;
//     }
// }

// class number {
//     private:
//     int a, b;
//     public:
//     void getdata()
//     {
//         cout<<"enter the number";
//         cin>>a>>b;
//     }
//     void putdata()
//     {
//         cout<<a<<"+i"<<b<<endl;
//     }
//     number operator ++()
//     {
//         a++;
//         b++;
//         return *this;
//     }
// };
// int main()
// {
//     number o1;
//     o1.getdata();

// cout<<"\n complex number w/o increment"<<endl;
//     o1.putdata();
//     ++o1;

// cout<<"\n complex number w/ increment";
//     o1.putdata();
//     return 0;
    
// }

// #include<iostream>
// using namespace std;

// class Number
// {
//    protected:
//     int n;

//     public:
//     void getdata(int x)
//     {
//         cout<<"Base class\n";
//         n=x;
//     }

//     void display()
//     {
//         cout<<n;

//     }
// };

// class sq:public number
// {
//     public:
//     void getdata(int y)
//     {
//         cout<<"derived class \n";
//         number::getdata(y);
//     }
//     void display()
//     {
//         cout<<"Square="<<n*n;
//     }
// };

// int main()
// {
//     sq no;

//     no.getdata(5);
//     no.display();
// }

// class baseClass {
//     public:
// void method1()
// {
//     cout<<"this is bassClass method\n";
// }
// virtual void method2()
// {
//     cout<<"this is baseclass method\n";
// }

// };
// class derivedclass:public baseClass
// {
//     public:
//     void method1()
//     {
//         cout<<"this is derived class method1\n";
//     }
//     void method2()
//     {
//         cout<<"this is derived class method2\n";
//     }
// };

// int main (){
//     derivedclass obj;
//     baseClass *pobj;

//     pobj=&obj;
    
//     pobj->method1();
//     pobj->method2();
//     return 0;

// }

// sum of all number from 1 to n which are divisable by 3
// int main (){
//     int n = 4;
//     int sum=0;
//     for (int i=0; i<=n;i++){
//         if (i%3 == 0){
//         sum+=i;
//         }
        
//     }
//     cout<<sum;
//     return 0;
// }


// print the factorial of n number
// int main() {
//     int n=10;
//     long factorial=1;
    

//     if (n < 0) {
//         cout << "Factorial is not defined for negative numbers.";
//     } else {
//         for (int i = 1; i <= n; i++) {
//             factorial *= i;  // Multiply factorial by i
//         }
//         cout << "Factorial of " << n << " is: " << factorial<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// template<class T1,class T2>
// class Test
// {
//     T1 a;
//     T2 b;

//     public :
//     Test(T1 x,T2 y)
//     {
//         a=x;
//         b=y;
//     }
//     void show()
//     {
//         cout<<a<<" and "<<b<<"\n";
//     }
// };
// int main(){
//     Test<float,int>test1(1.23F,123);
//     Test<int,char>test2(100,'W');

//     test1.show();
//     test2.show();
//     return 0;
// }

// #include <iostream>

// // Generic function to multiply two numbers
// template <typename T>
// T multiply(T a, T b) {
//     return a * b;
// }

// int main() {
//     // Test the function with different types
//     int intResult = multiply(5, 3);
//     double doubleResult = multiply(4.5, 2.2);
    
//     std::cout << "Multiplication of integers: " << intResult << std::endl;
//     std::cout << "Multiplication of doubles: " << doubleResult << std::endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <class T>

//     T add(T a, T b){

    
//     {
//         return a+b;
//     }
// }
// int main(){
//     int i=2;
//     int j=3;
//     float m=2.3;
//     float n=3.3;
//     cout<<add(i,j)<<endl;
//     cout<<add(m,n)<<endl;
//     return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;
// template <class T1,class t2>
// void display(T1 x,t2 y)
// {
//     cout<<"value of x="<<x<<endl;
//     cout<<"value of y="<<y<<endl;
// }
// int main()
// {
//     display(100,"hello");
//     display(200,2.3);
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    
return 0;
};



