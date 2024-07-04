/* how to reverse a number*/
#include<iostream>
#include<cmath>
#include<math.h> // contains function like power of digit 
using namespace std;
 
int main()
{
    // check if number is prime
    // int n ;
    // cin >> n;
    // bool flag = 0; // if flag incremented then the number is non prime 
    // for(int i = 2; i<sqrt(n); i++)// sqrt function in cmath library here we used it because if the user input larger number then we already checked its sqrt that it is prime or not
    // {
    //     if(n%i == 0)
    //     {
    //         cout<<"non-prime";
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag == 0)
    // {
    //     cout<<"prime"<<endl;
    // }
 // reversing a number
    //  int n;
    //  cin>>n;
    //  int reverse = 0;// storing number after reversing 
    //  while(n>0)
    //  {
    //     int lastdigit = n%10; // getting last digit of input number
    //     reverse = reverse*10 + lastdigit; // adding to reverse number means forming reverse number
    //     n = n/10;// decreasing the input number for terimating the loop
    //  }

    //  cout<<reverse<<endl;
    
// armstrong number 
/*
armstrong number means every digit's cube and addition of digit's cubs is same as number 
for eg. 153
1^3 = 1 
5^3 = 125
3^3 = 27
1 + 125 + 27 = 153
*/
   int n ;
   cin>>n;
   int sum = 0;
   int originaln = n;
   while(n>0)
   {
    int lastdigit = n%10;
    sum+= pow(lastdigit,3); // power fucntion from math.h library 
    n = n/10;
   }

   if( sum==originaln)
   {
    cout<<"ARMSTRONG NUMBER"<<endl;
   }
   else{
    cout<<"NOT ARMSTRONG NUMBER"<<endl;
   }
    return 0;
}