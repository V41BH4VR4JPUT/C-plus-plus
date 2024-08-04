#include <bits/stdc++.h>
using namespace std;


class num
{
 int count = 0; 
public:

    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number" << count << endl;
    }
    ~num()
    {
        cout << "destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are in the main function" << endl;

    num a;

    {
        cout << "we are in the block" << endl;
        num d, e;

        cout << "exiting the block" << endl;
    }
    cout << "BACK TO MAIN " << endl;
    return 0;
}