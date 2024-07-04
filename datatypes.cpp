/*data types in c++ are :
primitive = int(21834372324) ,float(5.6,6.8),character(!@#$%),boolean(0,1 or t/f)
derived = function ,array, pointer , refernce
user defined = class,structure,union,enum
*/ 
#include<iostream>
using namespace std;

int main()
{
    int a ; 
    // initialization (we are initializing datatype of the variable )
    cout<<" size of int: "<<sizeof(a)<<endl;
    // sizeof is the function to find out the size of variable in the memory
    float b;
    cout<<" size of float: "<<sizeof(b)<<endl;
    char c;
    cout<<" size of char: "<<sizeof(c)<<endl;
    bool d;
    cout<<" size of bool: "<<sizeof(d)<<endl;
    short int si;
    long int li;
    // modifires (used for modifying memory storage )
    cout<<" size of short int : "<<sizeof(si)<<endl;
    cout<<" size of long int : "<<sizeof(li)<<endl; 
    
    return 0;
    

}
