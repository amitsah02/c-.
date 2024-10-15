#include <iostream>
using namespace std;
int main()
{
    int a[] = {18, 48, 28, 58, 38, 68};
    int *k;
    k = a;
    for (int i = 0; i < 3; i++)
    {

        cout << *k << " ";
        k += 2;
    }
    return 0;
}