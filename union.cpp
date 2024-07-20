#include<bits/stdc++.h>
using namespace std;
typedef union money{
    int rice;
    char car;
}m ;
int main(){
    m m1;
    m1.car = 'x';
    m1.rice = 30;
    cout<<m1.car<<endl;

    return 0;
}