#include<iostream>
using namespace std;
void increment (int *n)
{
    (*n)++;
}
int main()
{
    // int a = 10;
    // int *aptr;
    // aptr = &a;

    // cout<<&a<<endl;// prints the location in memory 
    // cout<<aptr<<endl;// same prints location in memory
    // cout<<*aptr<<endl;// prints the value holds by pointer
    // *aptr = 20;
    // cout<<*aptr<<endl;// dereferncing 
    int a = 2;
    int *aptr = &a ;
    
    increment(&a);
    cout<<a<<endl;
    return 0;
}
