
#include <iostream>
using namespace std;

const int NUM_SUBJECTS = 5;

class Student {
private:
    int rollNo;
    string name;
    int marks[NUM_SUBJECTS];
public:
    void INPUT() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore(); // Ignore newline character
        getline(cin, name);
        cout << "Enter marks for " << NUM_SUBJECTS << " subjects:" << endl;
        for (int i = 0; i < NUM_SUBJECTS; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
 }

    void SHOW() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks:" << endl;
        for (int i = 0; i < NUM_SUBJECTS; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }

    int TOTAL() {
        int total = 0;
        for (int i = 0; i < NUM_SUBJECTS; i++) {
            total += marks[i];
        }
        return total;
    }

    double AVG() {
        return (double)TOTAL() / NUM_SUBJECTS;
    }
};

int main() {
    Student student;
    student.INPUT();
    student.SHOW();
    cout << "Total Marks: " << student.TOTAL() << endl;
    cout << "Average Marks: " << student.AVG() << endl;
    return 0;
}


