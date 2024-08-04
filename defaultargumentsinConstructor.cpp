#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }

    void PrintValue()
    {
        cout << "THE VALUE IS " << a << " +" << b << "i" << endl;
    }
};

int main()
{
    Complex c1(5 , 7);
    c1.PrintValue();

    Complex c2(7);
    c2.PrintValue();

    Complex c3;
    c3.PrintValue();
    return 0;
}