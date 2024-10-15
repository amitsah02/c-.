#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
    void insert(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void disp()
    {
        cout << "id=" << id << endl;
        cout << "name=" << name << endl;
        cout << "salary=" << salary;
    }
};
int main()
{
    Employee E1;
    Employee E2;
    E1.insert(101, "Ram", 10000);
    E1.insert(102, "Shyam", 16000);
    E1.disp();
    E2.disp();
    return 0;
}
