/*sytax for taking input from user*/
#include<iostream>
using namespace std;

int main()
{
    int amount1;
    cin>>amount1;
    int amount2;
    cin>>amount2;
    cout<<"money given by mother:"<<amount1<<endl;
    cout<<"money given by father:"<<amount2<<endl;
    // cin function is used for taking input from the user and sytax is shown above

    int sum;
    sum = amount1 + amount2;
    cout<<"total money i have: "<<sum<<endl;
    return 0;
}