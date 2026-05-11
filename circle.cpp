#include <iostream>
using namespace std;

const double PI = 3.14159;

class Circle {
private:
    double radius;
public:
    void get_radius(double r) {
        radius = r;
    }

    void area() {
        double area = PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    void circum() {
        double circumference = 2 * PI * radius;
        cout << "Circumference of Circle: " << circumference << endl;
    }

    void display_radius() {
        cout << "Radius of Circle: " << radius << endl;
    }
};
int main() {
    Circle circle;
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    circle.get_radius(radius);
    circle.display_radius();
    circle.area();
    circle.circum();
    return 0;
}
