#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int *ptr;

    cout<<"enter the number of values :";
    cin>>n;

    ptr = new int[n];
    cout<<"enter the values : "<<endl;
    for(int i =0 ; i<n;i++)
    {
        cin>>ptr[i];
    }

    cout<<"the values are : ";
    for(int i = 0; i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    delete[] ptr;
     for(int i = 0; i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}