#include <bits/stdc++.h>
using namespace std;
class Base
{
protected:
    string title;
    float ratings;

public:
    Base(string s, float r)
    {
        title = s;
        ratings = r;
    }
    virtual void display() = 0;
};

class Derived1 : public Base
{
    float vlength;

public:
    Derived1(string s, float r, float vl) : Base(s, r)
    {
        vlength = vl;
    }
    void display()
    {
        cout << "the title is : " << title << endl
             << "the ratings is : " << ratings << endl
             << "the vlength is : " << vlength << endl;
    }
};

class Derived2 : public Base
{
    int words;

public:
    Derived2(string s, float r, int w) : Base(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "the title is : " << title << endl
             << "the ratings is : " << ratings << endl
             << "the words is : " << words << endl;
    }
};
int main()
{
    string title = "abc";
    float ratings = 4.5;
    int words = 10;
    float vlength = 2.5;

    Derived1 obj2(title, ratings, vlength);
    Derived2 obj3(title, ratings, words);

    Base *base_class_pointer[2];

    base_class_pointer[0] = &obj2;
    base_class_pointer[1] = &obj3;

    base_class_pointer[0]->display();
    base_class_pointer[1]->display();

    return 0;
}