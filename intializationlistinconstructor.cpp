#include <bits/stdc++.h>
using namespace std;
class test
{
public:
    int a;
    int b;
    // intialization list in constructor
    test(int i, int j) : a(i), b(j + a)
    {
        cout << "constructor called" << endl
             << "the value of a is :" << a << endl
             << "the value of b is :" << b << endl;
    }
};
int main()
{
    test t(10, 20);
    return 0;
}