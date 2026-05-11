
#include <iostream>
using namespace std;

class Message {
public:
    Message() {
        cout << "Hello, an object of Message class is created!" << endl;
    }
};

int main() {
    Message obj1;
    Message obj2;
    return 0;
}