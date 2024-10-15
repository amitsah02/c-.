#include <iostream>
using namespace std;
int area(int x)
{
    return x * x;
}
int area(int l, int w)
{
    return l * w;
}
int area(int b, int h)
{
    return 0.5 * (b * h);
}
double area(double r)
{
    return 3.14 * r * r;
}
int main()
{
    int x, l, w, b, h;
    double r;
    cout << "Enter the side of the square";
    cin >> x;
    cout << "Enter the length of the rectangle";
    cin >> l;
    cout << "Enter the width of the rectangle";
    cin >> w;
    cout << "Enter the base of the triangle";
    cin >> b;
    cout << "Enter the height of the triangle";
    cin >> h;
    cout << "Enter the radius of the circle";
    cin >> r;
    cout << "The area of the square is " << area(x) << endl;
    cout << "The area of the rectangle is " << area(l, b << endl);
    cout << "The area of the triangle is " << area(b, h) << endl;
    cout << "The area of the circle  is " << area(r) << endl;
    return 0;
}