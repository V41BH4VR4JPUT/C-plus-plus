/* questions on 2-D array */

#include<iostream>
using namespace std;
// finding element in 2-d array
// int main()
// {
//     int  n , m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i = 0; i<n ; i++)
//     {
//         for(int j = 0 ; j<m; j++)
//         {
//             cin>>arr[i][j];

//         }
//     }
//     for(int i = 0; i<n ; i++)
//     {
//         for(int j = 0 ; j<m; j++)
//         {
//             cout<<arr[i][j]<<" ";

//         }
//         cout<<"\n";
//     }
//     int target ;
//     cin>>target;

//     bool flag = false;
//     for(int i = 0; i<n ; i++)
//     {
//         for(int j = 0 ; j<m; j++)
//         {
//             if(arr[i][j] == target)
//             {
//                 cout<<"element found at : "<<i<<j<<endl;
//                 flag = true;
//             }

//         }
//     }
//     if(flag == false)
//     {
//         cout<<"element is not found!!!"<<endl;
//     }
// }
// spiral order matrix traversal
int main()
{
    int n , m;
    cin>>n>>m;

    int arr[n][m];

    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    //spiral order 

    int row_start = 0 , row_end = n-1 , column_start = 0 , column_end = m-1;

    while(row_start <= row_end && column_start <= column_end)
    {
        //for row start
        for(int col= column_start; col<=column_end; col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        // for column end

        for(int row = row_start; row<=row_end; row++)
        {
            cout<<arr[row][column_end]<<" ";

        }
        column_end--;
        // row end
        for(int col = column_end; col>=column_start; col--)
        {
            cout<<arr[row_end][col]<<" ";

        }
        row_end--;
        // column start
        for(int row = row_end; row>=row_start; row--)
        {
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;

    }


    
}