#include <iostream>
using namespace std;
int main()
{
    int n, s = 0, i;
    cout << "Enter number" << endl;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        s = s + i;}

        cout << "s=" << s;
    
    return 0;
}