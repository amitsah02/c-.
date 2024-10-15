#include <iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    void insert(int i, string h)
    {
        id = i;
        name = "n";
    }
    void disp()
    {
        cout << "id=" << id << endl;
        cout << "name=" << name << endl;
    }
};
int main()
{
    student s1;
    student s2;
    s1.insert(101, "Ram");
    s2.insert(102, "Sita");
    s1.disp();
    s2.disp();
    return 0;
}
