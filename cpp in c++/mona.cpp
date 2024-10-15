#include <iostream>
using namespace std;
class student
{
public:
    int a, b, c;
    void add()
    {
        cout << "enter value for a " << endl
             << "& b" << endl;
        cin >> a >> b;
        c = a + b;
    }
    void sub()
    {
        cout << "enter value for a " << endl
             << "& b" << endl;
        cin >> a >> b;
        c = a - b;
    }
    void mult()
    {
        cout << "enter value for a " << endl
             << "& b" << endl;
        cin >> a >> b;
        c = a * b;
    }
    void print()
    {
        cout << "c=" << c << endl;
    }
};
int main()
{
    student obj1;
    obj1.add();
    obj1.print();
    obj1.sub();
    obj1.print();
    obj1.mult();
    obj1.print();

    return 0;
}