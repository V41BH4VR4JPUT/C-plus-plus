/* practise of inheritance */

#include <bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
private:
    int a;
    int b;

public:
    void Set_data(int num1, int num2);
    void Display();
};

void SimpleCalculator :: Set_data(int num1, int num2)
{
    a = num1;
    b = num2;
}

void SimpleCalculator ::Display()
{
    cout << "Simple Calculator" << endl;
    cout << "the two numbers are a = " << a << " and b = " << b << endl;
    cout << "the sum of two numbers is : " << (a + b) << endl;
    cout << "the difference of two numbers is : " << (a - b) << endl;
    cout << "the multiplication of two numbers is : " << (a * b) << endl;
    cout << "the division of two numbers is : " << (a / b) << endl;
    cout << endl;
}

class ScientificCalculator
{
protected:
    int num1;
    int num2;

public:
    void set_Data(int x, int y);
    void display();
};
void ScientificCalculator ::set_Data(int x, int y)
{
    num1 = x;
    num2 = y;
}
void ScientificCalculator ::display()
{
    cout << "Scientific Calculator" << endl;
    cout << "the two numbers are a = " << num1 << " and b = " << num2 << endl;
    cout << "the sum of two numbers is : " << (num1 + num2) << endl;
    cout << "the difference of two numbers is : " << (num1 - num2) << endl;
    cout << "the multiplication of two numbers is : " << (num1 * num2) << endl;
    cout << "the division of two numbers is : " << (num1 / num2) << endl;
    cout << endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void _Display()
    {
        Display();
        display();
    }
};

int main()
{
    HybridCalculator vaibhav;
    vaibhav.Set_data(28, 30);
    vaibhav.set_Data(16, 23);
    vaibhav._Display();

    return 0;
}