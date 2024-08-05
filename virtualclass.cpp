#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_data(int a)
    {
        roll_number = a;
    }

    void display()
    {
        cout << "the roll number is : " << roll_number << endl;
    }
};

class test : virtual public Student
{
protected:
    float maths, chemistry, physics;

public:
    void set_marks(float x, float y, float z)
    {
        maths = x;
        chemistry = y;
        physics = z;
    }

    void display_marks()
    {
        cout << " the marks obtained in maths : " << maths << endl
             << " the marks obtained in chemistry : " << chemistry << endl
             << " the marks obtained in physics : " << physics << endl;
    }
};

class sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float i)
    {
        score = i;
    }
    void display_score()
    {
        cout << "the score in sports is : " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display_report()
    {
        total = maths + chemistry + physics + score;
        display();
        display_marks();
        display_score();
        cout << "the total score is : " << total << endl;
    }
};
int main()
{
    result vaibhav;
    vaibhav.set_data(21007);
    vaibhav.set_marks(87, 89, 90);
    vaibhav.set_score(10);
    vaibhav.display_report();
    return 0;
}