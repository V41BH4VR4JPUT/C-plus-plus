
#include<bits/stdc++.h>
using namespace std;

int main()
 
{
   int * p = new (nothrow)int;
   if(!p){
    cout<<"failed"<<endl;
   }
   else{
    *p = 20;
    cout<<*p<<endl;
   }

   float *r = new float(34.6);
   cout<<*r<<endl;
    delete p;
    delete r; 
    return 0;  
}
