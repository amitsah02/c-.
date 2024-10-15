#include <iostream>
using namespace std;
class calci
{
public:
    int a, b, c;
    void data()
    {
        cout << "Enter a=" << a << endl;
        cin >> a;
        cout << "Enter b=" << b;
        cin >> b;
    }
    void add()
    {

        c = a + b;
        cout << "c=" << c;
        cin >> c;
    }
    void subtract()
    {
        c = a - b;
        cout << "c=" << c;
        cin >> c;
    }
    void multiply()
    {
        c = a * b;
        cout << "c=" << c;
        cin >> c;
    }
    void divide()
    {
        c = a / b;
        cout << "c=" << c;
        cin >> c;
    }
};
int main()
{
    calci c1, c2, c3, c4;
    c1.data();
    c1.add();
    c2.data();
    c2.subtract();
    c3.data();
    c3.multiply();
    c4.data();
    c4.divide();
    return 0;
}
