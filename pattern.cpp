#include<iostream>
using namespace std;
// rectangle pattern
/*
****
****
****
****
****
*/
// int main()
// {
//     int rows , columns;
//     cout<<"enter the number of rows :"<<endl;
//     cin>>rows;
//     cout<<"enter the number of columns :"<<endl;
//     cin>>columns;

//     for(int i = 0; i<rows; i++)// outer for loop should be for rows 
//     {
//         for(int j = 0;j<columns;j++)// inner for loop for columns always
//         { 
            
//             cout<<"*";
//         }
//         cout<<endl;// this line should be written for stepping into next row otherwise the pattern will not form
//     }
//     return 0;
// }
// hollow rectangle
/*
*****
*   *
*   *
*****
*/
int main()
{
    int rows , columns;
    cout<<"enter the number of rows :"<<endl;
    cin>>rows;
    cout<<"enter the number of columns :"<<endl;
    cin>>columns;

    for(int i = 1; i<=rows; i++)// outer for loop should be for rows 
    {
        for(int j = 1;j<=columns;j++)// inner for loop for columns always
        { 
            
            if(i == 1 || i == rows || j == 1 || j == columns)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;// this line should be written for stepping into next row otherwise the pattern will not form
    }
    return 0;
}