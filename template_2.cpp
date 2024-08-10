#include<bits/stdc++.h>
using namespace std;
// template with multiple parameters
template<class t1 , class t2>
class A{
    public :
    t1 data1;
    t2 data2 ;
    A(t1 a , t2 b){
        data1 = a ;
        data2 = b ; 
    }
    void display(){
        cout<<this->data1<<" "<<this->data2<<endl;
    }
};
int main(){
    A<char , float> obj('f', 4.3);
    obj.display();
    return 0;
}