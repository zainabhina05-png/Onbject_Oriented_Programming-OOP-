
#include <iostream>
using namespace std;

class Numbers {
private:
    int num1;
    int num2;
public:
    Numbers() {
        num1 = 100;
        num2 = 100;
    }

    void avg() {
        double average = (num1 + num2) / 2.0;
        cout << "Average: " << average << endl;
    }
};

int main() {
    Numbers obj;
    obj.avg();
    return 0;
}