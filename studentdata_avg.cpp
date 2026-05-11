#include <iostream>
using namespace std;
// WRITE A CLASS MARKS WITH TWO MEMBER FUNCTION INPUT() AND OUTPUT() TO INPUT AND OUTPUT  MARKS OF STUDENT ,FUCNTION FOR SUM() AND A FUNCTION FOR AVERAGE AVG()
class marks
{
    int m1, m2, m3;

public:
    void input()
    {
        cout << "Enter marks of three subjects : " << endl;
        cin >> m1 >> m2 >> m3;
    }
    void output()
    {
        cout << "The marks of three subjects are  " << m1 << endl
             << m2 << endl
             << m3 << endl;
    }
    void sum()
    {
        int sum = m1 + m2 + m3;
        cout << "The sum of three subjects is " << sum << endl;
    }
    void avg()
    {
        int sum = m1 + m2 + m3;
        float avg = sum / 3.0;
        cout << "The average of three subjects is " << avg << endl;
    }
};

int
main()
{
    marks m;
    m.input();
    m.output();
    m.sum();
    m.avg();
    return 0;
}