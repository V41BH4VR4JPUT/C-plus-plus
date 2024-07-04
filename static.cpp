
#include<bits/stdc++.h>
using namespace std;

class A {
    int x;
     public: 
     A()
     {
        cout<<"a constructor called";
     }
};
class B{
    static A a;
    public: 
     B()
     {
        cout<<"b constructor called";
     }

     static A getA()
     {
        return a;
     }
};

A B :: a;
int main()
 
{
    A a = B:: getA();
    cout << "\n" << endl;
    return 0;  
}