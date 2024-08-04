#include<bits/stdc++.h>
using namespace std;
class Number{
    int a;
    public :
     Number(){a = 0;}
     Number(int x){a = x;}
    //  Number(Number &obj){
    //     cout<<"copy constructor called"<<endl;
    //     a = obj.a;
    //  }
     void show(){cout<<"the value of the number is :"<<a<<endl;}
};
int main(){
    Number x , y , z(30), z2;
    x.show();
    y.show();
    z.show();
    Number z1(z);// copy constructor invoked
    z1.show();
    z2 = z;// copy constructor  will not be invoked
    z2.show();
    Number z3 = z;// copy constructor invoked
    z3.show();
    return 0;
}
// when no copy constructor is found , compiler supplies its own copy constructor