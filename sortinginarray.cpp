/* sorting in arrays */
#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    cout<<" number of elements in array is: "<<n<<endl;
    
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        
    }

    for(int i = 0; i<n-1; i++)// loop for arr[0] to arr[n-1]
    {
        for(int j = i+1; j<n; j++)// loop for arr[1] to arr[n]
        {
            if(arr[j]<arr[i])
            {// swapping procedure
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
            }
        }
    }
    
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
}