#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void print()
    {
        cout << "the complex number is :"
             << real << " + " << img << "i" << endl;
    }
};
int main()
{
    // Complex c1(3 ,5);
    //      c1.print();

    //    Complex *ptr = new Complex(3,5);
    //    (*ptr).print();

    Complex *ptr = new Complex(5, 8);
    ptr->print(); // function of arrow operator is same as dereference operator
    return 0;
}