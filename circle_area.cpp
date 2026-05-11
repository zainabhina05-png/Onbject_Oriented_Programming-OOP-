#include <iostream>
using namespace std;
// write a class circle with one data member radius.write three member function get_radius() to set radius  value with parameters value,area(), to display radius and circum() to calculate and display circumference of circle
 #include<iostream>
 using namespace std;
 class circle
 {

    public:
    float radius;
    void get_radius(float r)
    {
        radius=r;
        cout<<"Enter the radius"<<endl;
        cin>>radius;
        cout<<"The radius is "<<radius<<endl;
        }
        float area()
        {
            float a=3.14*radius*radius;

            cout<<"Area for "<<radius<<"is"<<a<<endl;

        }
        float circum()
        {
            float c=2*3.14*radius;

            cout<<"circumference for "<<radius<<"is"<<c<<endl;
        }};
        int main(){
             circle c;
             c.get_radius(5.0);
             c.area();
             c.circum();
             return 0;

        }