#include <bits/stdc++.h>
using namespace std;

class Y;
class X
{
    int data;

public:
    void Setvalue(int val)
    {
        data = val;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void Setvalue(int val)
    {
        num = val;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "THE SUM OF BOTH VALUES IS : " << o1.data + o2.num;
}
int main()
{
    X a1;
    a1.Setvalue(10);

    Y b1;
    b1.Setvalue(20);

    add(a1, b1);

    return 0;
}