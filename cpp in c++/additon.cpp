#include <iostream>
using namespace std;
int main()
{
    int i, n, s = 0;
    cout << "Enter number ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s = s + i;
        cout << "the number is" << s << endl;
    }

    return 0;
}