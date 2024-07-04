/*jumps in loops
break statement = to break or terminate the loop
continue statement = to skip next iteration of that loop
*/
#include<iostream>
using namespace std;
// those number which is divisible by 3 will not print (example1)
// int main()
// {
//     for (int i = 0; i <= 100; i++)
//     {
//         if(i%3 == 0)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
    
// }
//example2 print prime numbers between a and b
int main()
{
    int a ,b;
    cin>>a>>b;
    for(int num = a; num<=b; num++)// this for loop read numbers between two numbers 
    {
        int i;// if we initialize i in second for loop the code will not execute because its intialize twice 
        for( i = 2; i<num; i++)// this loop check whether the number between the two numbers id prime or not
        {
            if(num%i == 0)
            {
                break;
            }
        }
        if(i == num)
        {
            cout<<num<<endl;
        }
        
    }
    return 0;
}