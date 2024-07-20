#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a ,b;
    public :
     void setdata(int x , int y){
        a = x;
        b = y;
     }
     void showdatabySum(Complex o1 , Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
     }
     void printdata(){
        cout<<a<<" + "<<b<<"i"<<endl;}
};
int main(){
    Complex c1 ,c2 ,c3;
    c1.setdata(1,2);
    c1.printdata();

    c2.setdata(3,4);
    c2.printdata();

    c3.showdatabySum(c1,c2);
    c3.printdata();
    return 0;
}