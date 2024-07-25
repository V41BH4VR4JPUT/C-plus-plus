#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << a << " + " << b << "i" << endl;
    }

    friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.print();
    c2.setdata(3, 4);
    c2.print();
    c3 = sumComplex(c1, c2);
    c3.print();
    return 0;
}