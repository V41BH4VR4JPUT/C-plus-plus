/* array is a list of similar types variables */
#include<iostream>
#include<climits>
using namespace std;

int main()
 {
//     int n ;
//     cin >> n;
// // taking input in array
//     int array[n];
//     for(int i =0; i<n; i++)
//     {
//         cin>>array[i];
//     }
// // printing array     
//     for(int i = 0; i<n; i++)
//     {
//         cout<<array[i]<<" ";
//     }
    int n ;
    cin >> n;
// taking input in array
    int array[n];
    for(int i =0; i<n; i++)
    {
        cin>>array[i];
    }

    int maxno = INT_MIN;
    int minno = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        maxno = max(maxno,array[i]);
        minno = min(minno,array[i]);
// two ways to solve
        // if(array[i]>maxno)    
        // {
        //     maxno = array[i];
        // }
        // if(array[i]<minno)   
        // {
        //     minno = array[i];
        // }
    }

    cout<<"max and min number are\n"<<minno<<endl<<maxno<<endl;


     return 0;
}
