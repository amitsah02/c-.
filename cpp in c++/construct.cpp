#include <iostream>
using namespace std;
class test
{
    test()
    {
        int n = 10;
        cout << "n=" << n;
    }
    ~test()
    {
        cout << "Destroy the meaning";
    }
};
int main()
{
    test obj, obj1
    return 0;
}
