#include<bits/stdc++.h>
using namespace std;

int main(){
    int a =10;
    int & ref = a;

    ref = 40;
    cout<<a<<endl;

    a = 50;
    cout<<ref;
}