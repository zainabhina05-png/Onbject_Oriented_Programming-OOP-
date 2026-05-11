#include <iostream>
using namespace std;
// write a program that declares a class with one integar data member and two member function in() and out() to input and output data in data member
 class data
 {
     int a;
     public:
     void in()
     {
         cout<<"Enter a number : "<<endl;
         cin>>a;
         }
         void out()
         {
             cout<<"The number is : "<<a<<endl;
             }
             };
             int main()
             {
                 data d;
                 d.in();
                 d.out();
                 return 0;
             }