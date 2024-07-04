/*loops in c++ 
for loop
while loop
do-while loop
*/
#include<iostream>
using namespace std;
// for loop
// int main()
// {
//     int num;
//     cin>>num;

//     int sum = 0;// we initialize sum to zero here
//     for (int counter = 1; counter <= num; counter++)
//     // counter variable we initialize in for loop but we can also initialize outside loop and we apply condition on counter that the number user give the counter start counting till is satisfies condition and every time loop restart the counter is incremented by 1 because we use increment operater in last statement in the loop
//     {
//         sum = sum + counter;
//         // above sum is initialized as zero now it added everytime loop run till the conditon satisfies
//     }
//     cout<<sum<<endl;


//     return 0;
// }
// while loop
// int main()
// {
//     int n;
//     cin>>n;

//     while(n>0) // till the condition is true the loop will execute and moment it doesn't satisfies the condition loop terminate
//     {
//         cout<<n<<endl;
//         cin>>n;
//     }
//     return 0;
// }
//do-while loop
int main()
{
   int n;
   cin>>n;
   // in do-while loop the loop will execute for one time atleast because the condition applied after the body of the loop
   do
   {
    cout<<n<<endl;
    cin>>n;
   } while (n>0);
   



    return 0;
}