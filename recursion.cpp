
#include<bits/stdc++.h>
using namespace std;

int power(int n ,int p)
{
    if(p == 0)
    {
        return 1;
    }
    int prevpower = power(n,p-1);
    return n*prevpower;
}
// int sum(int n)
// {
//     if(n == 0)
//     {
//         return 0;

//     }
//     else{
//         int prevsum = sum(n-1);
//         return n + prevsum;
//     }
// }

int main()
 
{
    // int n;
    // cin>>n;
    // cout<<sum(n)<<endl;
    int n , p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
    cout << "\n" << endl;
    return 0;  
}