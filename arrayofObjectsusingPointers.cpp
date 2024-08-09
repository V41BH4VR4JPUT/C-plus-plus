#include <bits/stdc++.h>
using namespace std;
class Mall
{
    int id;
    float price;

public:
    void setdata(int i, float j)
    {
        id = i;
        price = j;
    }
    void display()
    {
        cout << "the id of the product is : " << id << endl;
        cout << "the price of the product is : " << price << endl;
    }
};
int main()
{
    int size = 3;
    Mall *ptr = new Mall[size];
    Mall *temptr = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "enter the id and price of the product : " << i + 1 << endl;
        cin >> p;
        cin >> q;
        ptr->setdata(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "the details of the product are : " << endl;
        temptr->display();
        temptr++;
    }

    return 0;
}