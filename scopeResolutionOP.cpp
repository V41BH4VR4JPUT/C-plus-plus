#include<bits/stdc++.h>
using namespace std;

int c = 30; // global variable
int main(){
    int a,b,c;
    cin>>a>>b;
    c = a + b;
    cout<<c<<endl;
    cout<<::c;// accessing global variable through scope resolution operator 
}