#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int *ptr;

    cout<<"enter the number of values :"<<endl;
    cin>>n;

    ptr = new int[n];
    cout<<"enter the values : "<<endl;
    for(int i =0 ; i<n;i++)
    {
        cin>>ptr[i];
    }

    cout<<"the values are : "<<endl;
    for(int i = 0; i<n;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}