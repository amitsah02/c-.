#include <iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    string address;
    void data()
    {
        cout << "Enter the id of student ";
        cin >> id;
        cout << "Enter the address of student";
        cin >> address;
    }
    void print()
    {
        cout << "id=" << id;
        cout << "name=" << name;
        cout << "address=" << address;
    }
};
int main()
{
    student s1,s2
                    s1.data();
s1.print();
    s2.data();
    s2 > print();
    return 0;
}
