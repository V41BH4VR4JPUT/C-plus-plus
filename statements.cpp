/*if-else statement in c++
simple if-else statement that if we have this then do this otherwise else condition
and nested if-else statement that if statement contains another if-else statement as shown below
*/
#include<iostream>
using namespace std;

int main()
{
    int savings;
    cin>>savings;
    cout<<"money in pocket: "<<savings<<endl;

    if(savings>5000)
    {
        if(savings>10000)// nested if-else statement
        {
            cout<<"roadtrip with friends\n";
        }
        else
        {
            cout<<"lunch in cafe with friends\n";
        }
    }
    else if(savings>2000)
    {
        cout<<"scooty ride to chai point\n";

    }
    else
    {
        cout<<"bhai tu khilade aaj paise nhi h\n";
    }
    return 0;
}