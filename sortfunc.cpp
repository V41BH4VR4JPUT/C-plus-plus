#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 1, 3, 4 , 6, 7 ,5 ,2 , 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}