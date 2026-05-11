
#include <iostream>
using namespace std;

class MyClass {
private:
    int num;
    char ch;
public:
    // Default constructor
    MyClass() : num(0), ch('x') {}

    // Parameterized constructor
    MyClass(int n, char c) : num(n), ch(c) {}

    // Member function to display values
    void show() {
        cout << "num: " << num << endl;
        cout << "ch: " << ch << endl;
    }
};

int main() {
    // Create object using default constructor
    MyClass obj1;
    cout << "Object 1 Values:" << endl;
    obj1.show();
    // Create object using parameterized constructor
    MyClass obj2(10, 'A');
    cout << "\nObject 2 Values:" << endl;
    obj2.show();

    return 0;
}