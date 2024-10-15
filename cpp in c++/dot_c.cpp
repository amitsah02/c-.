#include <iostream>
using namespace std;

class A
{
private:
int a=12,b=10;
//public:
friend void add(A);
friend void sub(A);
friend void mult(A);
};
void add (A r)
{
cout<<"add ="<<r.a+r.b<<endl;
}
void sub(A r)
{
cout<<"sub ="<<(r.a-r.b)<<endl;
}
void mult (A r)
{
cout<<"mult="<<(r.a*r.b);
}
 int main()
{
A a1;
add(a1);
sub(a1);
mult(a1);
return(0);
}