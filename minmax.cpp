#include <iostream>
using namespace std;

class Numbers {
public:
    int arr[5];

    void inputNumbers() {
        cout << "Enter 5 numbers:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Number " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
void findMinAndMax() {
        int min = arr[0];
        int max = arr[0];
        for (int i = 1; i < 5; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "Minimum Number: " << min << endl;
        cout << "Maximum Number: " << max << endl;
    }

    void displayNumbers() {
        cout << "Numbers:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Numbers numbers;
    numbers.inputNumbers();
    numbers.displayNumbers();
    numbers.findMinAndMax();
    return 0;
}