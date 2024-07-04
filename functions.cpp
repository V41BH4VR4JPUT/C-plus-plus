/* functions in c++ */
#include<iostream>
using namespace std;
/*
//printing prime numbers between two numbers 
int PrimeNumbers(int num1 , int num2)
{
    for(int i = num1; i<num2; i++ )
    {
        if(i%2 != 0)
        {
            cout<<"Prime Number: "<<i<<endl;
        }
    }

}

int main()
{ 
    int n1 , n2;
    cout<<"Enter the two numbers in which you want all prime numbers between them: "<<endl;
    cin>>n1>>n2;
    
    cout<<PrimeNumbers(n1,n2)<<endl;  
    return 0;
}
*/
// fibenacci sequence like = 0,1,1,2,3,5,8.....means sum of last two digit is third digit in the sequence
int fibenacciSeq(int num)
{
   int t1 = 0;
   int t2 = 1;
   int nextterm ;
   for(int i =1; i<=num; i++)
   {
     cout<<t1<<endl;
     nextterm = t1 + t2;
     t1 =t2;
     t2= nextterm;


   }
    
}
int main()
{
    int n;
    cout<<"Enter the digit place where you want the fibenacci sequence : "<<endl;
    cin>>n;
    cout<<fibenacciSeq(n)<<endl;

    return 0;
}