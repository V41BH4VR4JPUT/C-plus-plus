/* searching in array */
#include<iostream>
using namespace std;
// // linear search
// int main()
// {
//     int n ;
//     cin>>n;
//     cout<<" number of elements in array is: "<<n<<endl;
    
//     int arr[n];
//     fori(int i = 0; i<n; i++)
//     {
//         cin>>arr[i];
        
//     }
//     int key;
//     cin>>key;
//     cout<<"the number you want to find in the list : "<<key<<endl;

//     for(int i = 0; i<n; i++)
//     {
        
//         if(arr[i] == key)
//         {
//             cout<<i;
            
//         }
        
//     }

    

//     return 0;
// }

int binarySearch(int arr[], int n, int key)// function for binary search we pass array , size of array and key element which we have to find
{
    int s = 0;// s means starting point of array 
    int e = n;// e means endind point of array


    while(s<=e)// this condition means is s cross the e while searching the key we are finding is not in the list
    {
        int mid = (s+e)/2; // beacuse in binary search the array is in sorted manner (ascending order) so we can describe the mid point of the list

        if(arr[mid] == key)
        {
            return mid;// means if the finding element is present in the mid then it is found in first go example of best case
        }
        else if(arr[mid]>key)
        {
            e = mid-1;// means if the finding element present before mid and e will initalize to mid-1
        }
        else{
            s = mid+1;// means if the element present after mid then s is initialize by mid+1
        }
    } 
    return -1;// when loop breaks the function give -1 
}


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
    int key;
    cin>>key;
    cout<<"the number you want to find in the list : "<<key<<endl;

    cout<<binarySearch(arr,n,key)<<endl;// passing values to the function
    return 0;
}